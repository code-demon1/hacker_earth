#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
long long arr[1000001];

int main()
{
    int n;
    long long ans=0;
    scanf("%d",&n);
    for(int i =0 ;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=arr[i-1])
        {
           // int t;
           // cin>>t;
            ans =ans+arr[i-1]-arr[i]+1;
            arr[i]=arr[i-1]+1;
        }
    }
    cout<<ans;
}
