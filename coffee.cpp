#include<iostream>
using namespace std;
int main()
{
    char c[6];
    for (int i = 0; i < 6; i++)
    {
        cin>>c[i];
    }
    if(c[2]==c[3] && c[4]==c[5])
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
     return 0;
}