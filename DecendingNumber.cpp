#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int i,x=0;
    for(int i=1000;i>=1;i--)
    {
        cout<< i << " ";
        x++;
        if(x%5==0)
        {
            cout<< "\n";
        }
    }


    return 0;
}
