#include <iostream>
using namespace std;
int main() {
    int num,i=3;
    cout<<"Enter a number :";
    cin>>num;
    cout<<"2 --> Prime"<<endl;
    while(i<=num) {
        if(i%2!=0) {
            cout<<i<<" --> Prime"<<endl;
        }
        else {
            cout<<i<<" --> Not Prime"<<endl;
        }

        i=i+1;
    }

    return 0;


}
