#include<iostream>
using namespace std;
int main()
{
    int n,reminder,count=0;
    cin>>n;
    while (n>0)
    {
        reminder=n%10;
        if(reminder==7)
        {
          count++;
          break;
        }
        n/=10;
    }
    if(count>0)
    cout<<"Yes";
    else
    cout<<"No";
}