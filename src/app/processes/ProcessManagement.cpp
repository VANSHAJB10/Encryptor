#include <iostream>
#include "ProcessManagement.hpp"
#include <unistd.h>
#include <cstring>
using namespace std;

ProcessManagement::ProcessManagement() {}

bool ProcessManagement::submitToQueue(std::unique_ptr<Task> task) {
    taskQueue.push(std::move(task)); // now queue has the ownership of the task that pushed into taskQueue
    return true;
}

void ProcessManagement::executeTasks() {
    while (!taskQueue.empty()) {
        std::unique_ptr<Task> taskToExecute = std::move(taskQueue.front());
        taskQueue.pop();
        
        std::cout << "Executing task: " << taskToExecute->toString() << std::endl; 
        // since taskToExecute points to a pointer

        executeCryption(taskToExecute->toString());  // to be defined in cryption file
    }
}