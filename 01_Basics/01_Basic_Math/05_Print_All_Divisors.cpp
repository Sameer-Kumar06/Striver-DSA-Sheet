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
        for(int i=1; i*i<=n; i++)
        {
            if(i*i == n)
                cout<<i<<" ";
            else if(n%i == 0 )
                cout<<i<<" "<<n/i<<" ";
        }
    }
}