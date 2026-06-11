#ifndef IO_HPP
#define IO_HPP

#include<fstream>
#include<string>
#include<iostream>

class IO{
    public:
        // constructor
        IO(const std::string &file_path );  // here we have used constant as file path never changes and we are storing filepath by reference
        // destructor
        ~IO();
        std::fstream getFileStream(); 

    private:
        std::fstream file_stream; 
    };



#endif