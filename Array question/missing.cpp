#include <iostream>
#define MAX 5
using namespace std;


int main(){
    int a[MAX]={1,2,3,4,6};

    for(int i=0; i<MAX-1; i++){
        if(a[i+1] - a[i] !=1){
            cout<<"Missing number : "<<a[i]+1<<endl;
            break;
        }
    }
    return 0;

}