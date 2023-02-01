#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
   ll t;
   cin>>t;
   cin.ignore();
   while(t--)
   {
       vector<char>v1;
       vector<char>v2;
       string s;
       getline(cin,s);

       for(int i=0;i<s.size();i++)
       {
           if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
           {
                v1.pb(s[i]);
           }
           else{
                v2.pb(s[i]);

           }
       }

        for(ll i=0;i<v2.size();i++)
       {
           if(v2[i]==' ')
           {
             continue;
           }
           cout<<v2[i];
       }
       cout<<endl;



       for(ll i=0;i<v1.size();i++)
       {
           if(v1[i]==' ')
           {
             continue;
           }
           cout<<v1[i];
       }
       cout<<endl;









   }





    return 0;
}
