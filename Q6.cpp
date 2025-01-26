#include <iostream>
using namespace std;
int main() {
    float num1,num2;
    int choice;
    cout<<"To calculate area enter-1 \n"<<"To calculate perimeter enter-2 \n"<<"Enter your choice :";
    cin>>choice;
    if (choice==1 || choice ==2) {
        cout<<"Enter length :";
        cin>>num1;
        cout<<"Enter width :";
        cin>>num2;
        if (choice==1) 
            cout<<"Area of rectangle = "<<num1*num2;
        else if(choice==2) 
            cout<<"Perimeter of rectangle = "<<2*(num1+num2);
    }
    else 
    cout<<"Invalid Choice!!!";

    return 0;
    }
