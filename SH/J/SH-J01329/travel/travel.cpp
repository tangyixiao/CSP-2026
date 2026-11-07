#include<bits/stdc++.h>
using namespace std;
long long n,m,c,d,e,f;
bool g=0,h=0,x=0,k=0,l=0,i=0;
string s,a;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>n>>s>>m>>a;
    if(n==m && n!=1 && n!=16)
    {
        cout<<1;
        g=1;
    }
    else cout<<0;
    c=(s[0]+s[1])-'0';
    d=(a[0]+a[1])-'0';
    if(c==d && g)
    {
        cout<<1;
        h=1;
    }
    else cout<<0;
    if(s[2]=='C' || s[2]=='A' ||s[2]=='B')
    {
        if(a[2]=='C' || a[2]=='A' ||a[2]=='B')
        {
            x=1;
            k=1;
        }
    }
    else
    {
        if(a[2]=='d' || a[2]=='f')
        {
            x=1;
            l=1;
        }
    }
    if(h && x) cout<<1;
    else cout<<0;
    if(x&&h)
    {
        if(k)
        {
            if(s[2]=='A')
                if(a[2]=='B') i=1;
            if(s[2]=='B')
                if(a[2]=='A' || a[2]==c) i=1;
            if(s[2]=='C')
                if(a[2]=='B') i=1;
        }
        else
        {
            i=1;
        }

    }
    if(i) cout<<1;
    else cout<<0;
    return 0;
}
