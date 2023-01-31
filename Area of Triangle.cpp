#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        double s,a,b,c,x,y;
        cin>>a>>b>>c;
        s=(a+b+c)/2;
        x=s*(s-a)*(s-b)*(s-c);
        y=sqrt(x);
        printf("Area = %0.3lf\n",y);



    }



    return 0;
}
