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
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='A'||s[i]=='B'||s[i]=='C'||s[i]=='D'||s[i]=='E'||s[i]=='F'||s[i]=='G'||s[i]=='H'||s[i]=='I'||s[i]=='J'||s[i]=='K'||s[i]=='L'||s[i]=='M'||s[i]=='N'||s[i]=='O'||s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S'||s[i]=='T'||s[i]=='U'||s[i]=='V'||s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z')
            {
                cout<<"Uppercase Character"<<endl;
            }
            else if(s[i]=='a'||s[i]=='b'||s[i]=='c'||s[i]=='d'||s[i]=='e'||s[i]=='f'||s[i]=='g'||s[i]=='h'||s[i]=='i'||s[i]=='j'||s[i]=='k'||s[i]=='l'||s[i]=='m'||s[i]=='n'||s[i]=='o'||s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'||s[i]=='t'||s[i]=='u'||s[i]=='v'||s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z')
            {
                cout<<"Lowercase Character"<<endl;
            }
            else if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0')
            {
                cout<<"Numerical Digit"<<endl;
            }
            else cout<<"Special Characters"<<endl;


        }



    }



    return 0;
}
