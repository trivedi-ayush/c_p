#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int z=x*y;
        if(100>z)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<z/100<<"\n";
        }
    }
    return 0;
}