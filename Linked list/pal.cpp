#include <iostream>
using namespace std;

int main(){
    int num;
    int original;

    cout<<"Enter the number : ";
    cin>>num;
    original=num;

    int firstDigit = num%10;
    int secondDigit = num/10;

    int NewNum= firstDigit+secondDigit+firstDigit;

    if(NewNum==original){
        cout<<"Palidrome"<<endl;
    }
    else {
        cout<<"Not"<<endl;
    }

    return 0;
}