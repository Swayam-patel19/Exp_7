// NAME -SWAYAM PATEL
// PRN - 23070123165
// EXPERIMENT - 7(D) 
// Search an element in array. 
#include<iostream>
using namespace std;

int main() {
    int marks[5], i, j, num, a=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            a=1;
        }
    }
    if(a==0) {
        cout<<"Element not present";
    }
    else if(a==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}