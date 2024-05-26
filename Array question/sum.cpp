// Sum method to find missing element in an array 

#include <iostream>
#define MAX 5
using namespace std;

int main(){
    int a[MAX]={1,2,3,4,6};
    int n=MAX+1;
    
    int expected_Sum = n*(n+1)/2;

    //Calculate actual of sum of array element 

    int actual_Sum=0;

    for(int i=0; i<MAX; i++){
        actual_Sum += a[i];
    }

    //The missing number is the difference between the expected Sum and the actual sum
    int missing_num = expected_Sum - actual_Sum;

    cout<<"Missing number : "<<missing_num<<endl;

    return 0;
    
    
}