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
        if(y%x!=0)
        {
            cout<<y/x<<"\n";
        }
        else
        {
            cout<<y/x-1<<"\n";
        }
    }
    return 0;
}