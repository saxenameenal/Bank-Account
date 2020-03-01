#include<iostream>
#include<string>
#include"moneyTrans.h"

thing::thing(){
}

void thing::set_name(std::string words){           //functions in .h file under public 
    this->words=words;
}

std::string thing::get_name(){
    return words;
}