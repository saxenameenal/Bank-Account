#include<string>
#include<iostream>
#include"Account.h"

extern void main_menu();

int main(){

    // object 

    Account money;

    // variables;

    int input;

    int back1;

    int back2;

    int back5;

    int back3;



        main_menu: //Checkpoint for main menu

        main_menu(); //Function for main menu

        std::cin>>input; 


        // options

    switch(input){
        case 1:
            edit1:

             money.get_AccountDetails(); //create account

            std:: cin >> back1;

            if(back1 == 1){

                goto main_menu; // go back to main menu if prompted 1

            }else if(back1 == 2){

                goto edit1; // go back to the start of the 

            }

            break;

        case 2:

            edit2:

            money.withdraw();

            std:: cin >> back2;

            if(back2 == 1){

                goto main_menu;

            }else if(back2 == 2){

                goto edit2;

            }


            break;
        
        case 3:

            dep:

            money.bank_deposit();

            std:: cin >> back3;

            if(back3 == 1){


                goto main_menu;

            }else if (back3 == 2){

                goto dep;


            }
            break;

        case 4:

            money.account_transfer();



            break;

        case 5:

            acc_view:

            money.view_account();

            std:: cin >> back5;

            if(back5 == 1){

                goto main_menu;
            }else if (back5 == 2){

                goto acc_view;


            }

            
            break;

        default:

            std::cout<<"Invalid entry, please select correct digit (A-E)."<<std::endl;

            break;
    }
    return 0;
}