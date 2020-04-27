#include<iostream>
using namespace std;
int main()
{
    long long int x,goldenCoin=0,reminder;
    cin>>x;
       if (x/500>=1)
       {
            goldenCoin=(x/500)*1000;
            reminder=x%500;
            if(reminder>=5)
            {
                goldenCoin+=(reminder/5)*5;
            }
       }
       else
       {
         goldenCoin=(x/5)*5;
       }
       cout<<goldenCoin<<endl;
       return 0;
}