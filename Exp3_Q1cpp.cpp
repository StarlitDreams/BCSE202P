#include<iostream>

/*
Write a program to implement Binary search. 

Sample Input:5

10 20 30 40 50

50

50 is found at index 4
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
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<key<<" is found at index "<<mid;
            break;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(low>high)
    {
        cout<<"Element not found";
    }
    return 0;
}