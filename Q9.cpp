#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char a;
    int b;
    float c;

    cout<<"Enter a character: ";
    cin>>a;
    cout<<"Enter an integer: ";
    cin>>b;
    cout<<"Enter a decimal number: ";
    cin>>c;

    cout<<left<<setw(15)<<"Character" 
         <<left<<setw(15)<<"Integer" 
         <<left<<setw(15)<<"Decimal"<<endl;

    cout<<setfill('-')<<setw(45)<<"-"<<setfill(' ')<<endl;

    cout<<left<<setw(15)<<a 
         <<left<<setw(15)<<b 
         <<left<<setw(15)<<fixed<<setprecision(2)<<c<<endl;

    return 0;
}