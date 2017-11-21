#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
//int a[1000000000];
long long col[1000001];
long long uncol[1000001];
long long total[1000001];
int main()
{   
    //unsigned long long a = 10000000000000000000;
    cout<<a;
    uncol[0] =1;
    total[0]=1;
    for(int i=1;i<1000001;i++)
    {
        col[i] = uncol[i-1];
        uncol[i] = (long long) pow(3,i);
        total[i]=total[i-1]+col[i]+uncol[i];
    }
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        int temp;
        scanf("%d",&temp);
        cout <<total[temp] <<endl;
    }

    

}
