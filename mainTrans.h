#ifndef MAINNTRANS_H
#define MAINNTRANS_H

#include<string>

class thing{

    std::string words;

public:
    thing();
    void set_name(std::string words);
    std::string get_name();

};
#endif