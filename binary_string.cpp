#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        int c1=0,c0=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                c1++;
            }
            else
            {
                c0++;
            }
        }
        if(c0 && c1)
        {
            cout<<min(x,y)<<"\n";
        }
        else
        {
            cout<<"0\n";
        }
    }
    return 0;
}
