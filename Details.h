#ifndef DETAILS_H
#define DETAILS_H
#include <string>
#include <iostream>

class Details{
protected:
    int account_amount;
    std::string account_name;               //initialising all variables used in functions
    std::string account_number;
    int account_type;
    int account_initial;
    std::string name;

public:
    Details();	//constructor
    void get_AccountDetails();		//function

~Details();	//deconstructor
};
#endif