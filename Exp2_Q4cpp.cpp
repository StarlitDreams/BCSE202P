#include<iostream>

using namespace std;

/*
Write  a Program to find the smallest and largest element in the array.

Sample input: 6

100  5  17  168 78 -6

Output:

Smallest Value: -6

Largest Value: 168
*/

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Smallest Value: "<<min<<endl;
    cout<<"Largest Value: "<<max;
    return 0;
}