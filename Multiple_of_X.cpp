#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n,x,y;
    cin>>n>>x;
    ll z=x;
    if(n>x) cout<<"Invalid!"<<endl;
    else{
    for(ll i=1;i<=(x);i++)
    {
        y=n*i;
        if(y>z)
        break;
        cout<<y<<endl;
    }
    }
    cout<<endl;
    }



    return 0;
}
