#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int arr[1000001];
int m[100001];
int main()
{
    memset(m,-1,sizeof(int)*100001);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans =1;
    for(int i =0 ;i< n;i++){
        if (m[arr[i]] == -1){
            m[arr[i]] = i;
        } else {
            ans = max(ans,i-m[arr[i]]+1);
        }
    }
    cout<<ans;


}
