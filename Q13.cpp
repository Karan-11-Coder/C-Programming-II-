#include <iostream>
using namespace std;
int main() {
    int choice,PIN,withdraw_amount,deposit_amount,balance=50000;

    cout<<"\t Welcome to HDFC Bank ATM"<<endl;
    cout<<"Pease insert your card\n"<<endl;
    cout<<"Please choose an option"<<endl;
    cout<<"1. Withdraw"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Balance Enquiry"<<endl;
    cout<<"4. Exit"<<endl;

    cout<<"Enter your choice :";
    cin>>choice;

    if(choice>=1 && choice<=4) {
        switch(choice) {
            case 1:
            cout<<"Enter your 5-digit PIN :";
            cin>>PIN;
            if (PIN>=10000 && PIN<=99999) {
                cout<<"Enter the amount to withdraw :";
                cin>>withdraw_amount;
                if(withdraw_amount<=balance) {
                    cout<<"You have susccessfully withdrawn "<<withdraw_amount<<endl;
                    balance=balance-withdraw_amount;
                }
                else {
                    cout<<"Insufficient balance"<<endl;
                }
            }
            else {
                cout<<"Invalid PIN"<<endl;
            }
            break;

            case 2:
            cout<<"Enter your 5-digit PIN :";
            cin>>PIN;
            if (PIN>=10000 && PIN<=99999) {
                cout<<"Enter the amount to deposit :";
                cin>>deposit_amount;
                if(deposit_amount>=1000 && deposit_amount<=100000) {
                    cout<<"You have susccessfully deposited "<<deposit_amount<<endl;
                    balance=balance+deposit_amount;
                }
                else if (deposit_amount<1000) {
                    cout<<"Minimum deposite limit is TEN THOUSAND RUPEES(10000)"<<endl;
                }
                else {
                    cout<<"Maximum deposite limit is ONE LAKH RUPEES(100000)"<<endl;
                }
            }
            else {
                cout<<"Invalid PIN"<<endl;
            }
            break;

            case 3:
            cout<<"Enter your 5-digit PIN :";
            cin>>PIN;
            if (PIN>=10000 && PIN<=99999) {
                cout<<"Your account balance is "<<balance<<endl;
            }
            else {
                cout<<"Invalid PIN"<<endl;
            }
            break;

            case 4:
            cout<<"Thank you for using HDFC Bank ATM"<<endl;
            
            }
    }
    else {
        cout<<"Invalid choice"<<endl;
    }

    return 0;

}