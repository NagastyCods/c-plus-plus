// recieptapp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<string>

using namespace std;

int main()
{
    string customer_name;
    //string item1,item2,item3;
    string options[3] = {"Biscuit", "Milo", "Nido"};
    int option;
    int quantity1, quantity2,quantity3;
    //string biscuit, milo, nido;

    do {
        
        system("color F0");

        cout << "-----------------------Welcome Nagasty supermarket----------------------" << endl;
        cout << "----------------------------------------------------------------------------" << endl;
        cout << "---------------------Choose the items you want to buy---------------------------" << endl;
        cout << " 1. Biscuit(s) (40 gh cedis each) \n 2. Milo(s) (50 gh ceids each) \n 3. Nido(s) (30 gh cedis each) \n 4. Exit\n" << endl;
        cin >> option;
        if (option == 1) {

            
                cout << "Enter your name" << endl;
                cin >> customer_name;
               
            
            cout << "Enter the quantity you want to buy" << endl;
            cin >> quantity1;
            while (cin.fail()) {
                cout << "Invalid, enter a number" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> quantity1;

            }
            int price1 = 40*quantity1;
            float vat1 = 0.12 * price1;
            float totalAmount = price1 + vat1;
            cout << "----------------NagastyCodes--------------------------" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "------------------Your Reciept-------------------------------" << endl;
            cout << "Customers name: Mr/Ms " << customer_name << endl;
            cout << "Items bought: " << options[0] << endl;
            cout << "Quantity: " << quantity1 << endl;
            cout << "Price per item: GHS 40" << endl;
            cout << "Total price:GHS " << price1 << endl;
            cout << "VAT:GHS " << vat1 << endl;
            cout << "Amount Paid: GHS " << totalAmount << endl;
            cout << "------------HAVE A NICE DAY----------------" << endl;

        }
        else if (option == 2) {
            cout << "Enter your name" << endl;
            cin >> customer_name;
            cout << "Enter the quantity you want to buy" << endl;
            cin >> quantity2;
            while (cin.fail()) {
                cout << "Invalid, enter a number" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> quantity2;

            }
            int price2 = 40 * quantity2;
            float vat2 = 0.12 * price2;
            float totalAmount = price2 + vat2;
            cout << "----------------NagastyCodes--------------------------" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "------------------Your Reciept-------------------------------" << endl;
            cout << " Customers name: Mr/Ms " << customer_name << endl;
            cout << "Items bought: " << options[1] << endl;
            cout << "Quantity: " << quantity2 << endl;
            cout << "Price per item: Ghs 40" << endl;
            cout << "Total price:Ghs " << price2 << endl;
            cout << "VAT: " << vat2 << endl;
            cout << "Amount Paid: Ghs " << totalAmount << endl;
            cout << "------------HAVE A NICE DAY----------------" << endl;

        }
        else if (option == 3) {
            cout << "Enter your name" << endl;
            cin >> customer_name;
            cout << "Enter the quantity you want to buy" << endl;
            cin >> quantity3;
            while (cin.fail()) {
                cout << "Invalid, enter a number" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> quantity3;

            }
            int price3 = 40 * quantity3;
            float vat3 = 0.12 * price3;
            float totalAmount = price3 + vat3;
            cout << "----------------NagastyCodes--------------------------" << endl;
            cout << "--------------------------------------------------------" << endl;
            cout << "------------------Your Reciept-------------------------------" << endl;
            cout << "Customers name: Mr/Ms " << customer_name << endl;
            cout << "Items bought: " << options[2] << endl;
            cout << "Quantity: " << quantity3 << endl;
            cout << "Price per item: Ghs 40" << endl;
            cout << "Total price:Ghs " << price3 << endl;
            cout << "VAT: " << vat3 << endl;
            cout << "Amount Paid: Ghs " << totalAmount << endl;
            cout << "------------HAVE A NICE DAY----------------" << endl;

        }
        else if (option == 4) {
            break;
        }
        else {
            cout <<"Error try again" << endl;
        }

    } while (option != 0 || option != char(option));

   


  



}

