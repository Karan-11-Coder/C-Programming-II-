#include <iostream> 
using namespace std;
int main() {
    int a,b,c,d;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    cout<<"Enter c :";
    cin>>c;
    cout<<"Enter d :";
    cin>>d;
    cout<<(a^b)+(c&d);

    return 0;
}