#include <iostream>
#include <filesystem>
#include <stdio.h>
#include "./src/app/processes/ProcessManagement.hpp"
#include "./src/app/processes/Task.hpp"

using namespace std;
namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    std::string directory;
    std::string action;

    std::cout << "Please Enter directory path: ";
    std::getline(std::cin, directory);

    std::cout << "Action to perform ? (encrypt/decrypt): ";
    std::getline(std::cin, action);


}