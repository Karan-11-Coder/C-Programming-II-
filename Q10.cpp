#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Enter first integer :";
    cin>>num1;
    cout<<"Enter second number :";
    cin>>num2;

    if (num1%num2==0) {
        cout<<num1<<" is multiple of "<<num2;
    }
    else {
        cout<<num1<<" is not multiple of "<<num2;
    }
    
    return 0;
    

}