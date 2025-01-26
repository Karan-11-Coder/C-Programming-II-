#include <iostream>
using namespace std;
int main() {
    int num1,num2,num3;
    cout<<"Enter first number :";
    cin>>num1;
    cout<<"Enter second number :";
    cin>>num2;
    num3=num2;
    num2=num1;
    num1=num3;
    cout<<"First number is "<<num3<<endl;
    cout<<"Second number is "<<num2;

    return 0;


}