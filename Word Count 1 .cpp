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
        ll cnt1=0,cnt2=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i])
           {
              cnt1++;
           }
           if(s[i]!=' '){

              cnt2++;
           }

        }
        cout<<"Count = "<<(cnt1-cnt2)+1<<endl;




   }




  return 0;
}
