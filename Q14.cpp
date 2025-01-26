#include <iostream>
using namespace std;
int main() {
    int side1,side2,side3;
    cout<<"Enter side-1 :";
    cin>>side1;
    cout<<"Enter sie-2 :";
    cin>>side2;
    cout<<"Enter side-3 :";     
    cin>>side3;
    if (side1==side2 && side2==side2) {
        cout<<"Equilateral Triangle";
    }
    else if(side1==side2 || side2==side3 || side1==side3) {
        cout<<"Isosceles Triangle";
    }
    else {
        cout<<"Scalene Triangle";
    }

    return 0;

}