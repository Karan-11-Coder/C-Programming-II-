#include <iostream>
using namespace std;
int main() {
    string name;
    string surname;
    int age;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your surname: ";
    cin>>surname;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Congartulations "<<name<<" "<<surname<<","<<endl;
    cout<<"You have completed "<<float(age*365)+float(age/4)<<" days on Earth!";
    return 0;
}