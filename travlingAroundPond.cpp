#include<iostream>
using namespace std;
int main()
{
    long long int k,n,sum=0;
    cin>>k>>n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        sum+=(arr[i+1]-arr[i]);
    }
    cout<<sum<<endl;
    return 0;
}