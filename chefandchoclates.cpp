#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int c,x,y;
        cin>>c>>x>>y;
        c=c-x;
        cout<<c*y<<"\n";
    }
    return 0;
    
}