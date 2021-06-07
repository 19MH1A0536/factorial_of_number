#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int d[100005];
int fact(int n)
{
    if(n<=1)
        return 1;
    if(n>1)
        return d[n]=n*fact(n-1);
}
int main()
{
    int num;
    cin>>num;
    for(int i=-1;i<num;i++)
        d[i]=-1;
    cout<<fact(num)<<endl;
    for(int i=0;i<num;i++)
        cout<<d[i]<<" ";
}