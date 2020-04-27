#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    arr[0]=0;
    for (int i = 1; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i <= n;)
    {
        count=0;
       for (int j = i; j < n; j++)
       {
           if(arr[j]==i)
           {count++;i++;}
           else
           break;
       }
        cout<<count<<endl;  
    }
    
}