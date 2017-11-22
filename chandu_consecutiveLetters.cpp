#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

char str[31];

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        int i=0;int j=0;
        while(j<strlen(str)+1)
        {
            if(str[i] == str[j])
            {
                j++;
            } else{
                str[++i] = str[j];
                j++;
            }
        }
        cout<<str<<endl;
    }

    return 0;
}
