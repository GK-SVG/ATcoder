#include<iostream>
#include<algorithm>
using namespace std;
int  main()
{
    int n,m,sum=0,count=0;
    cin>>n>>m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sum=sum/(4*m);
    //cout<<sum<<endl;
    //sort(arr,arr+n);
    for (int i =0; i < n; i++)
    {
        if(!(arr[i]<sum))
        count++;
        // if(count==m)
        // break;
    }
    if(count==m)
    cout<<"Yes";
    else
    cout<<"No";
    
}