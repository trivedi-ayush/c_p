#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b; 
        cin>>a>>b;
        if(a==1 || b==1)
        {
            cout<<-1<<"\n";
        }
        else if(__gcd(a,b)==1)
        {
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }     
    }
    return 0;
}