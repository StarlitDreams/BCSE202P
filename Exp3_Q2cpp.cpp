#include<iostream>
#include<math.h>

using namespace std;

/*
Write a program to calculate mean, variance and standard deviation.
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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    float mean=sum/n;
    float var=0;
    for(int i=0;i<n;i++)
    {
        var+=pow(arr[i]-mean,2);
    }
    var=var/n;
    float sd=sqrt(var);
    cout<<"Mean: "<<mean<<endl;
    cout<<"Variance: "<<var<<endl;
    cout<<"Standard Deviation: "<<sd;
    return 0;
}