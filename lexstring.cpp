#include<iostream>
#include<string>
#include<algorithm>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l, r;
        ll n;
        cin>>n;
        string str;
        cin>>str;
        ll temp[n];
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '0')
                temp[i] = 0;
            else
                temp[i] = 1;
        }
        sort(temp, temp + n);
        for(int i = 0; i < n; i++)
        {
            if(temp[i] == 0)
                str[i] = '0';
            else
                str[i] = '1';
        }
        cout<<str<<endl;
        
    }
}