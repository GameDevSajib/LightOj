#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
       ll n;
       cin>>n;
       ll a[n+5];
       ll b[n+5];
       for(int i=0;i<n-1;i++)
       {
           cin>>a[i];

       }
       ll sum1=0;
       for(ll i=0;i<n-1;i++)
       {
           sum1+=a[i];
       }
       //cout<<sum1<<endl;
       ll sum2=0;
       for(int i=1;i<=n;i++)
       {

            sum2+=i;

       }
       //cout<<sum2<<endl;
       cout<<(sum2-sum1)<<endl;



  }



 return 0;
}
