// NAME -SWAYAM PATEL
// PRN - 23070123165
// EXPERIMENT - 7 (F) 

// Finding minimum and maximum element of an array.          

#include<iostream> 
using namespace std; 

int main() {
    int n, i, max=0;  
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) 
    {
        cout<<"Element "<<i<<" is: ";
        cin>>a[i];
    }
    for (i=0;i<n; i++) 
    {
        if (a[i]>max) 
        {
            max=a[i];
        }
    }
    int  min=a[0]; 
    for (i=0; i<n;i++) 
    {
        if (min>a[i]) 
        {
            min=a[i];
        }
    }
    cout<<"Maximum: "<<max<<"\n"<<"Minimum: "<<min;
}