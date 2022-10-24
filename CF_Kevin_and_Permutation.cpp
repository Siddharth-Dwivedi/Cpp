#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        for(i=n/2+1; i<=n; i++)
        {
            if(i==n && (i%2)==1)
            cout<<i<<" ";
            else
            cout<<i<<" "<<i-n/2<<" ";
        }
        cout<<"\n";
    }
}
