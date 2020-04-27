#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    c-=b;
    if(c<=0)
    {cout<<"Yes";}
    else
    {
        a-=d;
        if(a<=0)
        {cout<<"No";}
        else
        {
            c-=b;
            if(c<=0)
           {cout<<"Yes";}
            else
             {
                 a-=d;
                 if(a<=0)
                  cout<<"No";
                  else
                  {
                      if(a>=b)
                      cout<<"Yes";
                      else
                      cout<<"No";
                  }
                  
             }
        }
    }
    
    //cout<<a<<" "<<c<<endl;
    return 0;
}
