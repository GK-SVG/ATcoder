#include<iostream>
using namespace std;
int main()
{
   long long int n,sum=0,reminder;
    cin>>n;
    // if (n%3==0 || n%5==0)
    // reminder=0;
    // else
    // reminder=n%3;
    // n-=reminder;
    
    for(int i=1;i<=n;i++)
    {
       if(i%3==0 || i%5==0)
       continue;
       else
       sum+=i;
    }   
    cout<<sum;
}