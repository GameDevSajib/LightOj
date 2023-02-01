#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll a[10000]={0};
       ll b[10000]={0};
       ll c[10000]={0};
       ll n,m;
       cin>>n;
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
       }
       cin>>m;
       for(ll i=0;i<m;i++)
       {
           cin>>b[i];
       }
       ll x=n+m;
       for(ll i=0;i<n;i++)
       {
           c[i]=a[i];

       }

       for(ll i=0;i<m;i++)
       {
           c[n+i]=b[i];

       }


       sort(c,c+x);
       for(ll i=0;i<x;i++)
       {
           cout<<c[i]<<" ";
       }


    }



    return 0;
}
