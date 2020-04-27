#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,max=1,divisor;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                for (int l = 1; l <=k; l++)
                {
                    if(i%l==0 && j%l==0 && k%l==0)
                    {
                        cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                        if(max<l)
                        max=l;
                    }
                }
                sum+=max;
            }
            
        }
        
    }
    cout<<sum;
}