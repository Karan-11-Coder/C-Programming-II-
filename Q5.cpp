#include <iostream>
using namespace std;
int main() {
    float num1,num2;
    const float time=2;
    cout<<"Enter principal amout :";
    cin>>num1;
    cout<<"Enter rate of interest :";
    cin>>num2;
    cout<<"Simple interest = "<<(num1*num2*time)/100;
    return 0;
}