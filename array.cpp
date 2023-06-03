#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{


    int arr[5];

    // array input
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }


    // array output
   for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
   //single element access 
    cout<<arr[2];
    
    cout<<endl;

    // reverse array
    for(int i=4; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;





    return 0;
}