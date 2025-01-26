#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b,c,d;
    cout<<"Enter leading coefficient :";
    cin>>a;
    cout<<"Enter second coefficient :";
    cin>>b;
    cout<<"Enter constant:";
    cin>>c;
    cout<<"Qudratic equation is: "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;

    d=(b*b)-(4*a*c);

    if(d<0) {
        cout<<"Roots are imaginary"<<endl;
    }
    else if (d==0) {
        cout<<"Roots are real and equal"<<endl;
        cout<<"Roots are: "<<(-b+sqrt(d))/(2*a)<<endl;
    }
    else {
        cout<<"Roots are real and distinct"<<endl;
        cout<<"Roots are: "<<(-b+sqrt(d))/(2*a)<<" and "<<(-b-sqrt(d))/(2*a)<<endl;
    }

    return 0;
}