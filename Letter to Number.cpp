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
        vector<int>v;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
                s[i]=(s[i]-65)+1;
                v.pb(s[i]);
        }
          for(int i=0;i<v.size();i++)
          {
              cout<<v[i];
          }
          cout<<endl;
        }
    return 0;
}
