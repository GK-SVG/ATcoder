#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   long long int n,k,min,num1,num2;
    cin>>n>>k;
    min=n;
    double d2,d1=(double)n/k;
    d2=d1;
    d2=floor(d2);
    d1=ceil(d1);
    if(min<k)
    cout<<min;
    else{
        num1=n-(k*d1);
        if(num1<=0)
         num1*=(-1);
        num2=n-(k*d2);
        if(num2<=0)
         num2*=(-1);
        if(min>num1)
        min=num1;
        if(min>num2)
        min=num2;
        cout<<min;
    }
    
    

}