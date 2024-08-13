# Exp_7
Aim -> To study and implement C++ Arrays and Strings.

Software -> Visual Studio Code

Theory ->
Array:
• An arry is a fixed-size sequential collection of the elemnts of same data type. It consists of continuous memory locations.
• The array's indexes begin at 0. Meaning that the first item saved at index 0 is [0].
• The final element of an array with size n is kept at index (n-1).

Strings:
• A string is a sequence of characters that is used as an object of a class.

• String class defines a number of functionalities that allow manifold operations on strings.

Code:

(A)

```
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
```

(B)

```
#include <iostream>
#define S 4
using namespace std;

int main() {
    int array1[S];
    //take input from user
    cout << "Enter " << S << " elements of array: ";
    for (int index = 0; index < S; index++) {
        cin >> array1[index];
    }
  cout << endl;

    // display entered array ekements
    for (int j : array1) {
        cout << j << "  ";
    }

   return 0;
}
```

(C)

```
int main() {
    int i,n;
    cout<<"Enter the size of array: ";
    cin>> n;
    int a[n]; 
    //create array
    for(i=0;i<n;i++)
    {
        cout<<"Enter elements "<<i+1<<": ";
        cin>>a[i];
    }
    //display input array
     cout<<"Array entered by the user is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"";
    }

    //reverse array
    cout<<"\n Reverse of the entered array is: "; 
    for (i=n-1; i>=0; i--) {
        cout<<a[i]<<"";
    }
    return 0; 
}
```

(D)

```
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
```

(E.1)

```
#include <iostream>
using namespace std;

int main() {
    
  // declare and initialize an array 
  double numbers[] = {7.5, 2.5, 3.6, 5.12, 7.35, 24.27};

  double sum = 0.0;
  double count = 0.0;
  double average;

  cout << "The numbers are: ";

  //  print array elements use of range-based for loop
  for (const double n : numbers) {
    cout << n << "  ";
    //  calculate the sum
    sum += n;
    // count the no. of array elements
    ++count;
  }
  // print the sum
  cout << "\nSum = " << sum << endl;

  // find the average
  average = sum / count;
  cout << "\nTheir Average = " << average << endl;
  return 0;
}
```

(E.2)

```
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
```

(F)

```
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
```

(G)

```
#include<iostream> 
#include<string>
using namespace std; 

int main() 
{
    string a;
    cout<<"Enter any word: "; 
    cin>>a;
    cout<<"Entered string is "<<a<<"."<<"\n";
    return 0;
}
```

(H)

```
#include<iostream>
#include<string>
using namespace std;
int main() {
string a, b;
cout<<"Enter strings: ";
cin>>a>>b;
cout<<"CONCATENATION: "<<a+b;

return 0;
}
```

(I)

```
#include<iostream>
#include<string>
using namespace std;
int main() {
string a;
cout<<"Enter string: ";
cin>>a;
int i;
for(i=a.length()-1;i>=0;i--) {
cout<<a[i];
}
return 0;
}
```

(J)

```
#include<iostream>
#include<string>
using namespace std;
int main() {
string a;
cout<<"Enter a string: ";
cin>>a;
int n=a.length(), i, flag=0;
for(i=0;i<a.length();i++){
if(a[i]==a[n-1]){
flag=1;
}
n--;
}
if(flag==1){
cout<<a<<" is palindrome";
}
else{
cout<<a<<" is not palindrome";
}
}
```

OUPTUT:

(A)

<img width="482" alt="Screenshot 2024-08-13 at 18 21 40" src="https://github.com/user-attachments/assets/8244ebfd-4f57-4e6a-87c9-f545be3d8c7d">

(B)

<img width="341" alt="Screenshot 2024-08-13 at 18 22 17" src="https://github.com/user-attachments/assets/02998b9a-ebe1-45b9-820f-9c526c5c80cd">

(C)

<img width="430" alt="Screenshot 2024-08-13 at 18 22 37" src="https://github.com/user-attachments/assets/23f0d7bf-1640-4bca-b94b-12c2bc8e433d">

(D)

<img width="343" alt="Screenshot 2024-08-13 at 18 22 59" src="https://github.com/user-attachments/assets/e4d5a72a-84a0-4f68-8fd3-fad9857656f9">

(E.1)

<img width="481" alt="Screenshot 2024-08-13 at 18 23 20" src="https://github.com/user-attachments/assets/69818a73-797a-4277-b423-cacb3263673f">

(E.2)

<img width="529" alt="Screenshot 2024-08-13 at 18 23 55" src="https://github.com/user-attachments/assets/1a3b396b-aa3b-4bed-8667-2b32d8b39619">

(F)

<img width="547" alt="Screenshot 2024-08-13 at 18 24 40" src="https://github.com/user-attachments/assets/d56103e7-477d-4fca-9f46-67468cf03386">

(G)

<img width="469" alt="Screenshot 2024-08-13 at 18 25 13" src="https://github.com/user-attachments/assets/55b4c09f-e2c6-4c45-a59f-0c40bd74786c">

(H)

<img width="359" alt="Screenshot 2024-08-13 at 18 26 42" src="https://github.com/user-attachments/assets/ecb35fab-a590-40aa-ae20-9d74349041fd">

(I)

<img width="264" alt="Screenshot 2024-08-13 at 18 27 15" src="https://github.com/user-attachments/assets/d08cb81d-6b52-473e-840b-66e30a51ac5d">

(J)

<img width="304" alt="Screenshot 2024-08-13 at 18 27 41" src="https://github.com/user-attachments/assets/ae456952-f2d1-4889-8be3-38e9b43d43a4">

Conclusion -> I learnt about arraysa ans strings and perfrmed several programmes based on them.

