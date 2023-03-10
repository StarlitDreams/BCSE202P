#include<iostream>
/*
Write a Program to implement linear search. 

Sample input : 5

10 20 30 40 50 

30 

output

30 is found at index 2


*/

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<key<<" is found at index "<<i;
            break;
        }
    }
    return 0;
}