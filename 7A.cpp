// NAME -SWAYAM PATEL
// PRN - 23070123165
// EXPERIMENT - 7(A) 

#include<iostream>
using namespace std; 

// Program to print an array. 
int main() {
    int i;
    int a1[5]={19, 20, 5, 6, 7};
    int a2[5]={5,6,9,0,6};
    cout<<"Array is: ";

    for(i=0; i<5; ++i) {
        cout<<"Array is: "<<a1[i]<<" "<<"\n";
    }
    for(i=0; i<5; ++i) {
        cout<<"Array is: "<<a2[i]<<" "<<"\n";
    }
    return 0;
}

