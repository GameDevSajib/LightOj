#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        float n;
        cin>>n;
        ll cnt=0;
        while(n>=1)
        {
            ll x=n/2;
            n=n/2;
            cnt++;
            //cout<<x<<endl;
        }
        cout<<cnt<<" "<<"days"<<endl;


    }


    return 0;
}
