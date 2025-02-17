#ifndef IO_HP
#define IO_HPP

#include <fstream>
#include <string>
using namespace std;
#include <iostream>

class IO{
    public:
        IO(const string &file_path);
        ~IO();

        fstream getFileStream();

    private:
        fstream file_stream; 

};


#endif