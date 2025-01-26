#include <iostream>
using namespace std;
int main() {
    int num1,num2,choice;
    cout<<"Enter first integer :";
    cin>>num1;
    cout<<"Enter second integer :";
    cin>>num2;
    cout<<"Enter 1 to use + \n"<<"Enter 2 to use - \n"<<"Enter 3 to use * \n"<<"Enter 4 to use / \n"<<"Enter your choice :";
    cin>>choice;
    switch (choice) {
        case 1:
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        break;
        case 2:
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        break;
        case 3:
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        break;
        case 4:
        cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        break;
        default :
        cout<<"Invalid choice";
    }
    return 0;
    
}
