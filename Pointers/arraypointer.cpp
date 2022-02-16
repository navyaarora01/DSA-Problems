#include <iostream>
using namespace std;

int main()
{

    int arr[5] = { 1, 2, 3, 4, 5 };
    int *ptr = arr; //pointer to the element at 0th index of the array
    
    cout<<ptr<<endl; //prints the address of element at 0th index
    cout<<*ptr<<endl;  //prints the element at 0th index i.e. 1

    int (*p)[5]; //pointer that points to array of 5 integers
    p= &arr; //points to the whole array

    for(int i=0; i<5; i++)
    {
        cout<< "Address of element at "<< i <<" index is "<< p <<endl;      
        p++;
    }
    
    return 0;
}

/* Read out : https://www.geeksforgeeks.org/pointer-array-array-pointer/ */