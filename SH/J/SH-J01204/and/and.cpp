#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans;
string maxx="";
pair <string,long long> s[200005];
string ats(long long a)
{
    string answ="";
    while(a)
    {
        if(a&1)
        {
            answ+='1';
        }
        else{
            answ+='0';
        }
        a>>=1;
    }
    reverse(answ.begin(),answ.end());
    return answ;
}
long long sta(string s)
{
    reverse(s.begin(),s.end());
    long long k=1,maxn=0;
    for(int i=0;i<s.length();i++)
    {
        maxn+=k*(s[i]=='1');
        k*=2;
    }
    return maxn;
}
string cmp(string a,string b)
{
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<max(a.length(),b.length());i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]=='1')
            {
                return a;
            }
            else{
                return b;
            }
        }
    }
    return a;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    cin>>a[1];
    ans=a[1];
    s[1].first=ats(a[1]);
    s[1].second=1;
    maxx=max(maxx,s[1].first);
    for(int i=2;i<=n;i++)
    {
        cin>>a[i];
        s[i].first=ats(a[i]);
        s[i].second=i;
        maxx=cmp(maxx,s[i].first);
        ans&=a[i];
    }
    int k=1,maxn=0;
    for(int i=0;i<maxx.length();i++)
    {
        maxn+=k*(maxx[i]-'0');
        k*=2;
    }
    for(int i=1;i<=n;i++)
    {
        s[i].first=ats(a[i]&maxn);
    }
    sort(s+1,s+n+1);
    ans=a[s[n].second];
    for(int i=n-1;i>n-m;i--)
    {
        ans&=a[s[i].second];
    }
    cout<<ans;
}
