// BANKACCOUNTSYSTEM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>

using namespace std;
class Bank_Account {

    int Money_deposit;
    char type;
    int acno;
    char name[70];

public:
    void report() const;
    int retMoney_deposit() const;
    void create_bank_account();
    void dep(int);
    int retacno() const;
    void display_account() const;
    void Updation();
    void rettype() const;
    void draw(int);

};

void Bank_Account::Updation() {
    cout << "\n\tBank_account.: <<acno";
    cout << "\n\tUpdation Bank_account name:";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\n\tUpdation type of Bank_Account:";
    cin >> type;
    type = toupper(type);
    cout << "\n\tUpdation balnce Total-Money:";
    cin >> Money_deposit;
}

void Bank_Account::create_bank_account() {
    system("CLS");
    cout << "\n\tPlease enter the Bank_Account no.:";
    cin >> acno;
    cout << "\n\tPlease enter the name of the Bank_Accout holder.:";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\n\tPlease enter the type of bank_account (C/S):";
    cin >> type;
    type = toupper(type);
    cout << "\n\tPlease enter the starting Total-money:";
    cin >> Money_deposit;
    cout << "\n\tBank_Account Created..";
}

void Bank_Account::display_account() const {
    cout << "\n\tBank_Account No.:" << acno;
    cout << "\n\tBank_Account Holder name:";
    cout << name;
    cout << "\n\tType of Bank_Account:" << type;
    cout << "\n\tBalance Total-Money:" << Money_deposit;
}
int Bank_Account::retacno() const {
    return acno;
}

void Bank_Account::rettype() const {
    return rettype();
}

void Bank_Account::report() const {
    cout << acno << setw(10) << " " << name << setw(10) << " " << type << setw(6) << Money_deposit << endl;
}

void Bank_Account::dep(int x) {
    Money_deposit += x;
}

void Bank_Account::draw(int x) {
    Money_deposit -= x;
}

int Bank_Account::retMoney_deposit() const {
    return Money_deposit;
}

void write_Bank_Account();
void display_sp(int);
void display_all();

void delete_Bank_Account(int);
void Money_deposit_withdraw(int, int);
void Updation_Bank_Account(int);

int main()
{
    char ch;
    int num;
    
    do {
        system("CLS");
        cout << "\n\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";

        cout << "\n\tBANK MANAGEMENT SYSTEM";
        cout << "\n\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";

        cout << "\t\t     ::MAIN MENU::\n";
        cout << "\n\t\t1. NEW Bank_Account";
        cout << "\n\t\t2. Money_deposit Totoal-Money";
        cout << "\n\t\t3. WITHDRAW Total-Money";
        cout << "\n\t\t4. BALANCE ENQUIRY:";
        cout << "\n\t\t5. All Bank_Account HOLDER LIST:";
        cout << "\n\t\t6. Close An Bank_Account";
        cout << "\n\t\t7. Updation a Bank_Account";
        cout << "\n\t\t8. EXIT";
        cout << "\n\t\t\t SELECT YOUR OPTION (1-8):";
        cin >> ch;

        switch (ch) {
        case'1':
            write_Bank_Account();
            break;

        case'2':
            system("CLS");
            cout << "\n\t\t Please Enter the Bank_Account no.:"; cin >> num;
            Money_deposit_withdraw(num, 1);
            break;

        case'3':
            system("CLS");
            cout << "\n\t\t Please Enter the Bank_Account no.:"; cin >> num;
            Money_deposit_withdraw(num, 2);

        case'4':
            system("CLS");
            cout << "\n\n\t Please Enter the Bank_Account No.:"; cin >> num;
            display_sp(num);
            break;

        case'5':
            display_all();
                break;

        case'6':
            system("CLS");
            cout << "\n\t\t Please Enter the Bank_Account no.:"; cin >> num;
            delete_Bank_Account(num);
            break;

        case'7':
            system("CLS");
            cout << "\n\t\t Please ENter the Bank_Account no.:"; cin >> num;
            Updation_Bank_Account(num);
            break;

        case'8':
            system("CLS");
            cout << "\n\n\t *********DEVELOPED BY NAGASTYCODES.COM**********:";
            break;
        default: cout << "\a";
        }
        cin.ignore();
        cin.get();


    } while (ch != '8');
    return 0;
   
}

