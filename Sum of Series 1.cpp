#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,k;
        cin>>x>>k;
        if(x==1&&k==1)
        {
            cout<<"Result = "<<2<<endl;
        }
        else{
                ll r=(pow(x,k)-1)*x;
                ll result=r/(x-1)+1;
                cout<<"Result = "<<result<<endl;

        }



    }





    return 0;
}
