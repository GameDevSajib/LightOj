#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
using namespace std;

void print_reverse(char str[])
{
    for(int i=strlen(str)-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf(" ");

}
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
       char s[10000];
       char word[10000];
       scanf(" %[^\n]", s);
       int i,k;
       for(i=0,k=0;i<strlen(s);i++)
       {
           if(s[i]!=' ')
           {
               word[k]=s[i];
               k++;

           }
           else if(k>0)
           {
               word[k]='\0';
               print_reverse(word);
               k=0;
           }

       }
       if(k>0)
       {
           word[k]='\0';
           print_reverse(word);
       }
       printf("\n");



    }


    return 0;
}
