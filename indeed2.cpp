/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
int arr[1000001];
//  map <pair<int ,int >,long long >m;
// long long max(long long a, long long b){
//     return a>b?a:b;
// }
// int rec(int i , int j,int k ){
//     if (k==0)
//     return 0;
//     if(m.count(make_pair(i,j))!=0){
//         return m[make_pair(i,j)];
//     }
//     long long ans =max(rec(i+1,j,k-1)+arr[i],rec(i,j-1,k-1)+arr[j]);
//     m[make_pair(i,j)]=ans;
//     return ans;
// }
int main()
{
    int n,k;
    scanf("%d %d",&k,&n);;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int b1=k-1;
    int b2 =n-k;
    long long dp1[k];
    long long dp2[k];
    long long ans =0;
    dp1[0]  = arr[0];
    for(int i=1;i<k;i++)
    dp1[i]=dp1[i-1]+arr[i];
    
    
    dp2[0]=arr[n-1];
    for(int i=n-2,j=1;i>=b2;i--,j++)
    dp2[j]=dp2[j-1]+arr[i];
    
    ans = max(dp1[k-1],dp2[k-1]);
    for(int i=0;i<k-1;i++)
    {
        ans = max(ans,dp1[i]+dp2[k-1-i-1]);
    }
    
    cout<<ans;
    
}
