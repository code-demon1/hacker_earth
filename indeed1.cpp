/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char str [1000001];
int min(int a, int b){
    return a<b?a:b;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        int j =strlen(str)-1;
        int i=0;
        int ans =0;
        while(i<j){
            if(str[i]!=str[j]){
                int temp =min(str[i],str[j]);
                temp =temp-97+1;
                ans=ans+temp;
            }
            i++;
            j--;
        }
        cout<<ans<<endl;
    }
}
