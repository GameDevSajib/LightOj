#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=1;i<(s.size())-1;i++)
        {
            if(s[i]=='L')
            {
                s[i]=s[i-1];
            }
            if(s[i]=='R')
            {
                s[i]=s[i+1];
            }
        }
        cout<<s;
        cout<<endl;



    }



    return 0;
}
