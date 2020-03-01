#include <string>
#include <iostream>
#include "Account.h"
#include "Details.h"

Account::Account() : Details(){         //constructor, inheriting from sub-class 

} 

double Account::withdraw(){
    invalid_withdrawalNumber:       //goto checkpoint
    std::cout<<"Enter Account Number: "<<std::endl;
        std::cin>>withdraw_number;

    if(withdraw_number == account_number){ //if account number is the same then runs

        w1:

        std::cout<<"How much would you like to withdraw?"<<std::endl;
            std::cin>>with;

        if(with>account_initial){
            std::cout<<"Insufficient funds in account. Enter a value less than or equal to " << " " <<account_initial<<"."<<std::endl; 
                std::cin>>with;
        }
        if (account_initial=account_initial-with){
            std::cout<<"Withdrawal successful,the new account balance is"<<" " << account_initial<<"."<<std::endl;
        }
       
    }
    if (withdraw_number != account_number){
        std::cout<<"Incorrect account number, please enter correctly."<<std::endl;   // if it ndoesnt match
        goto invalid_withdrawalNumber;
    }

    std:: cout << "Press 1 to go back to the main menu" << std::endl;

    std:: cout << "Press 2 to withdrawl more money" << std:: endl;

    return 0;
}


double Account::bank_deposit(){
    invalid_DepositNumber:
    std::cout<<"Enter Account Number: "<<std::endl;
        std::cin>>deposit_number;

    if(deposit_number == account_number){

        std::cout<<"How much would you like to deposit?"<<std::endl;
            std::cin>>deposit;

        limit=10000 - account_initial; //set limiit
        int num=account_initial+deposit; //update variable                            


        if(num>10000){
            std::cout<<"Account exceeds limit of $10,000. Please enter a value less than or equal to "<<limit<<"."<<std::endl; 
            //exceeds
                std::cin>>deposit;
        }
        else(num<=10000);{
            account_initial=account_initial+deposit;
            std::cout<<"Deposit successful. The new account balance is"<<" "<< account_initial<<"."<<std::endl;
            //balance update successful 
        }    
    }
    if(deposit_number != account_number){
        std::cout<<"Incorrect account number, please enter correctly."<<std::endl;  
        goto invalid_DepositNumber;
    }

    //allow the user to choose options


    std:: cout << "Press 1 to go back to the main menu" << std::endl;

    std:: cout << "Press 2 to deposit more money" << std:: endl;


    return 0;
}


void Account::view_account(){

    start_acc: //cjheck points

    std::cout << "Please type in the account number you wish to view" << std::endl;

    acc:

    std:: cin >> acc_num;

    //display account details

    if(acc_num == account_number){

        std::cout << "Your account details are:" << std::endl; //account summary

        std:: cout << "Accout Number:" << " " << account_number << std::endl;  

        std:: cout << "Account Name: " << " " << name << std::endl;

        std:: cout << "Your current balance: " << " " << account_initial << std::endl;
  

    }else{

        std::cout << "The account number doesn't match, please try again" << std::endl; //when account number doesnt match

        goto acc;

    }

    //provide options
    std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

    std:: cout << "Press 1 to go back to the main menu" << std::endl;

    std:: cout << "Press 2 to view more accounts" << std:: endl;
    //users have options to choose 

}

void Account::account_transfer(){

    std:: cout << "Please enter your account number " << std:: endl;

    incorrect_trans:

    std:: cin >> acc_num_trans;

    //when not working

if(acc_num_trans != account_number){
        std::cout<<"Incorrect account number, please enter correctly."<<std::endl;  

    goto incorrect_trans;

    }

    //choosing account

    std:: cout << "Please enter the account number you wish to transfer to " << std::endl;

    std:: cin >> acc_to_transfer;

    std:: cout << "How much would you like to transfer?" << std::endl;

    std:: cin >> trans_amount;

    //when amount is not reached

    while(trans_amount > account_initial){

        std::cout << "Insufficient amount in your account, Please try again" <<std::endl;
        std::cin >> trans_amount;
    }

    account_initial = account_initial - trans_amount; //update the initial amount in the existing bank

    std:: cout << "Sucess, the money has been transfered, Your account has" << " " << account_initial << std::endl; // display the amount left


    std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

    std:: cout << "Press 1 to go back to the main menu" << std::endl;   

    std:: cout << "Press 2 to transfer more money" << std:: endl;

    //users have options 
}

Account::~Account(){


} //deconstructor