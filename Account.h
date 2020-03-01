#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <iostream>
#include "Details.h"

class Account: public Details{      //inheriting from sub-class Details
protected:

    int edit;               //initialising variable used in functions
    int w;
    std::string acc_num_trans;
    int trans_amount;
    std:: string acc_to_transfer;
    int v;
    std::string withdraw_number; 
    double with; 
    std::string deposit_number;
    double deposit;
    double limit;
    std::string acc_num;
    
public:

    Account();                      // constructor

    double bank_deposit();          //initialising functions
    double withdraw();
    void account_transfer();
    void view_account();
    
    ~Account();             //deconstructor
};
#endif