#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namesoace std;

int arr[1000001];
int main()
{
    int n;
    scanf("%d",&n);
    for (int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    sort(arr,arr+n);
    long long sum =0;
    long long sr[100001];
    int len =1;int j=0;
    int i=0;
    while(i<n)
    {

        int x=i;
        for(;x<i+len && x < n;x++)
        {
            ar[j]+=arr[x];
        }
        i=x;
        if()
        j+=1;
        len+=1;
    }
}
