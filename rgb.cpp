#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                if(str[i]!=str[j] && str[i]!=str[k] && str[j]!=str[k] && ((j-i)!=(k-j)))
                count++;
            }
            
        }
        
    }
   cout<<count; 
}