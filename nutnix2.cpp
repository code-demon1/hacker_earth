 #include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int dis[1000001];
int pet[1000001];
long long  dp_s[1000001];
long long dp_p[1000001];

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=n;i>=0;i--)
    {
        scanf("%d %d",&dis[i],&pet[i]);
        
    }
    int ans=0;
    for (int i=0;i<=n;i++)
    {
        dp_s[i]=10000001;
    }
    dp_s[0]=0;
    dp_p[0]=pet[0];
    dp_s[n+1]=100000001;

    for (int i=0;i<=n+1;i++){
        for (int j=0;j<i;j++)
        {
            if (dp_p[j]>=dis[j]-dis[i])
            {
                int temp =100000001;
                if (temp>dp_s[j]+1){
                    dp_s[i]=dp_s[j]+1;
                    temp =dp_s[i];
                    dp_p[i] =dp_p[j]-dis[j]-dis[i]+pet[i];
                }
            }
        }
    }
    for (int i =0 ;i<=n+1;i++){
        cout <<dp_s[i] << " ";
    }
    if (dp_s[n+1]==100000001)
        cout<<-1;
    else 
        cout<<dp_s[n+1]-1;
    return 0;


}
