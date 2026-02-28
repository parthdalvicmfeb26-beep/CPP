#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    int accountNumber;
    string accountHolderName;
    double balance;

    public:

        void setaccountNumber(int a){
            accountNumber = a;
        }

        void setaccountHolderName(string name){
            accountHolderName = name;
        }

        void setbalance(double b){
            balance = b;
        }

        int getaccountNumber() const{
            return accountNumber;
        }

        string getaccountHolderName() const{
            return accountHolderName;
        }

        double getbalance() const{
            return balance;
        }

        void deposit(int amount){
            if(amount > 0){
                balance += amount;
            }
            else{
                cout << "\nCan\'t Deposit Negative Amount!" << endl;
            }
        }

        void withdraw(int amount){
            if(balance > amount){
                balance -= amount;
                cout << "\nBalance Updated!" << endl;
                cout << "\nRemaining balance is: " << balance << endl;
            }
            else{
                cout << "\nInsufficient Balace!";
            }
        }
};

int main(){
    BankAccount bank;
    
    int ac_num, ac_bal, choice, amount;
    string ac_hold;

    cout << "\nEnter You\'re Accout Number: ";
    cin >> ac_num;
    cout << "\nEnter You\'re Name: ";
    cin >> ac_hold;
    cout << "\nEnter You\'re Balance: ";
    cin >> ac_bal;

    bank.setaccountNumber(ac_num);
    bank.setaccountHolderName(ac_hold);
    bank.setbalance(ac_bal);

    do{
        cout << "\n1. Deposit money into your account!" << endl;
        cout << "\n2. Withdraw money from your account!" << endl;
        cout << "\n3. Display the account details!" << endl;
        cout << "\n4. Exit the program!" << endl;

        cout << "-------------------------------------------------------------------------------" <<endl;

        cout << "\nEnter Your choice: ";
        cin >> choice;

        switch (choice){
            case 1:
                cout << "\nEnter the amount you want to deposit: ";
                cin >> amount;

                bank.deposit(amount);

                break;

            case 2:
                cout << "\nEnter the amount you want to withdraw: ";
                cin >> amount;

                bank.withdraw(amount);

                break;

            case 3:
                cout << "\nAccount Number is: " << bank.getaccountNumber() << endl;
                cout << "\nAccount Holder Name is: " << bank.getaccountHolderName() << endl;
                cout << "\nRemaining Balance in your account is: " << bank.getbalance() << endl;

                break;

            case 4:
                cout << "\nExiting Program!" << endl;
        }
    }while(choice != 4);
}