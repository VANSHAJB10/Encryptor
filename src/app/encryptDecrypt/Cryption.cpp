// this file will be working on a task and will extract flePath then perform Encryption/Decryption

#include "Cryption.hpp"
#include "../processes/Task.hpp"
#include "../fileHandling/ReadEnv.cpp"

int executeCryption(const std::string& taskData) {
    Task task = Task::fromString(taskData);

    ReadEnv env;

    std::string envKey = env.getenv();
    int key = std:: stoi(envKey);

    if (task.action == Action::ENCRYPT) {
        char ch;

        while (task.f_stream.get(ch)) {
            ch = (ch + key + 10) % 255;
            task.f_stream.seekp(-1, std::ios::cur);
            //moving the pointer 1 step back and make it current position to put the encrypted character in that place
            task.f_stream.put(ch);
        }
        task.f_stream.close();
    }

    
}    