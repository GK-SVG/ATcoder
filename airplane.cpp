#include<iostream>
using namespace std;
int main()
{
   int P,Q,R;
   cin>>P>>Q>>R;
   int min=P+Q;
   if((P+Q)<min)
   min=P+Q;
   if((Q+R)<min)
   min=Q+R;
   cout<<min<<endl;
   return 0;   
}