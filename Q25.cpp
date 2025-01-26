#include <iostream>
using namespace std;
int main() {
    string alpha_num;
    int sum=0,i=1,count=0;
    while (i>0) {
        cout<<"Enter integer or type Exit to terminate :";
        cin>>alpha_num;
        if (alpha_num=="Exit") {
            cout<<"\nProgramme terminated successfullly"<<endl;
            break;
        }
        else {
            count=count+1;
            sum=sum+stoi(alpha_num);
            continue;
        }
    }

    cout<<"\nSum of all input integer = "<<sum;
    cout<<"\nTotal number of input integer = "<<count;

    return 0;



}