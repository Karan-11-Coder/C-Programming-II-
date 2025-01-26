#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float num1,num2;
    cout<<"Enter value of dividend :";
    cin>>num1;
    cout<<"Enter value of divisor :";
    cin>>num2;
    cout<<fixed<<setprecision(2);
    cout<<num1<<" / "<<num2<<" = "<<num1/num2;
    return 0;
}