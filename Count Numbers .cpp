#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
         string s;
         getline(cin,s);
         ll cnt=0;
         for(int i=1;i<s.size();i++)
         {
             if(s[i]==' ' && s[i-1] !=' ')
             {
                 cnt++;
             }
         }
         cout<<cnt+1<<endl;



    }

    return 0;
}
