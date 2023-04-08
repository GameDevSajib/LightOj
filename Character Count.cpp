#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int cnt[26];
    char s[100005];
    ll t;
    cin>>t;
    while(t--)
    {

        cin>>s;
        for(int i=0;i<26;i++)
        {
            cnt[i]=0;
        }
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                cnt[s[i]-'a']++;
            }
        }

        for(int i=0;s[i]!='\0';i++)
        {
            int cur= s[i]-'a';
            //cout<<cur<<endl;
            if(cnt[cur]!=0){
             printf("%c = %d\n",'a'+cur,cnt[cur]);
             cnt[cur]=0;
        }
        }
        if(t) cout<<"\n";

    }


    return 0;
}
