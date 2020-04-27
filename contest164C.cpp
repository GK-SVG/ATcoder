#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    long long int n,count=0,count2=0;
    cin>>n;
    string s[n];
    for (long long int  i = 0; i < n; i++)
    {
        /* code */
        cin>>s[i];
    }
    sort(s,s+n);
    for (long long int i = 0; i < n;i++)
    {
        
           for (int k = i; k < n; k++)
           {
               count2=0;
               if(s[i].at(0)==s[k].at(0))
               {
                  if(s[i].length()==s[k].length())
                  {
                      for (int l = 0; l < s[i].length(); l++)
                      {
                         if(s[i].at(l)==s[k].at(l))
                         continue;
                         else
                         {
                            /* code */
                            count2++;
                            break;
                         }
                  
                      }
                      if(count2==0)
                      count++;
                  }
                  else
                  break;
               }
               else
               {
                // i=k;
                 break;
               }
           }
           
    }
    cout<<count<<endl;   
    return 0;

}