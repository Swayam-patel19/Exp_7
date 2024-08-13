// NAME -SWAYAM PATEL
// PRN - 23070123165
// EXPERIMENT - 7 (E.2) 

// Using simple for loop 

#include<iostream>
using namespace std;

int main() {
    int a1[5], i, j;
    float sum=0, avg;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
    for(j=0;j<5;j++) {
        sum = sum + a1[j];
    }
    cout<<"Sum of elements = "<<sum<<endl;
    avg = sum/5;
    cout<<"Average = "<<avg;
}