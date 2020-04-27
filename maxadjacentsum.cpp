#include<iostream>
using namespace std;
int main()
{
    long long int n,sum1=0,sum2=0,max=-4294967295;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum1=0;sum2=0;
        for (int j = i; j < n; j++)
        {
            if(j%2==0)
            sum1+=arr[j];
            else
            sum2+=arr[j];
        }
        if(sum1>max || sum2>max)
        {
            if(sum1>max)
            max=sum1;
            if(sum2>max)
            max=sum2;
        }
      //  cout<<sum1<<" "<<sum2<<endl;
    }
    cout<<max;
}