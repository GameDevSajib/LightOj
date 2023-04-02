#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll T;
   cin>>T;
   while(T--)
   {
       ll t;
       cin>>t;
       int a[t+5];
       int b[t+5];
       for(ll i=0;i<t;i++)
       {
             cin>>a[i];
       }
       for(ll i=0;i<t;i=i+2)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;


   }




    return 0;
}
