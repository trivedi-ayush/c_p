#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int B=1;
        for(int i=2;i<=n;i++)
        {
            if(n%2==0)
            {
                B=B^i;
            }
            else if(n%2!=0)
            {
                B=B&i;
            }
        }
        cout<<B<<"\n";
    }
    return 0;
}