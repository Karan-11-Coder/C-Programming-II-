#include <iostream>
using namespace std;
int main() {
    int num,factorial=1;
    cout<<"Enter a number :";
    cin>>num;
    do {
        factorial=factorial*num;
        cout<<num;
        if (num>1) {
            cout<<" * ";
        }
        num=num-1;
    } while(num>=1);

    cout<<" = "<<factorial;
}