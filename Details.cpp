#include <string>
#include <iostream>
#include "Details.h"

Details::Details(){     //deconstructor

}
void Details::get_AccountDetails(){

    invalid_AccountNumber:              //goto function checkpoint
    std::cout<<"Enter Account Number: "<<std::endl; 
        std::cin>>account_number;       

        if(account_number.length()<3 || account_number.length()>12){        
            std::cout<<"Invalid entry, please enter a number of appropriate length (3-12 digits). "<<std::endl;     //validating user input
            goto invalid_AccountNumber;     //goto function 
        }
          
    std::cout<<"Enter name: "<<std::endl;   //getting user input
        std::cin>>name;                     

    std::cout<<"Enter Account Type (Press 1 for Savings or 2 for Cheque): "<<std::endl;      //allowing user option for bank account type
    invalid_accountType:                //goto checkpoint       
        std::cin>>account_type;             

    switch(account_type){
        case 1:
            std::cout<<"Savings is selected. "<<std::endl;      //first bank type
            break;

        case 2: 
            std::cout<<"Cheque is selected. "<<std::endl;       //second bank type
            break;
        
        default:
            std::cout<<"Invalid entry, please enter appropriate type: "<<std::endl;        //validating user input
            goto invalid_accountType;        //goto function 
            break;
    }

    std::cout<<"Enter initial Bank Balance ($0.10 to $10,000): "<<std::endl;        //providing user a limit on bank account
    invalid_initialAmount:  // goto checkpoint
        std::cin>>account_initial;

        if(account_initial<0.10 || account_initial>10000){                  //defensive programming, not allowing user to input more or less than given limit, validating user input
            std::cout<<"Invalid entry, please enter an amount within range specified: "<<std::endl;     //allowing user to re-enter details
            goto invalid_initialAmount; //goto function 
        }

    std::cout << "Thank you, your account has been succesfully created." <<std::endl;        //finishing

    std:: cout << " " << std::endl;


    overview:           //goto checkpoint

    std::cout << "~~~Here is an overview of the account~~~" << std::endl;



    std:: cout << "Accout Number:" << " " << account_number << std::endl;       //providing user a summary of account details

    std:: cout << "Account Name: " << " " << name << std::endl;

    std:: cout << "Your current balance: " << " " << account_initial << std::endl;
    
    std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

}

Details::~Details(){        //deconstructor

}