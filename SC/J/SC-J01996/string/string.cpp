#include<bits/stdc++.h>
using namespace std;
void f(vector<char>l,vector<char>p)
{
    long long ans=0;
    for(long long i=0;i<l.size();i++)
    {
        if(l[i]!=p[i])
            ans++;
    }
    cout<<ans;
}
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n;cin>>n;
    long long cnt=0;
    vector<char>v,l,p;
    for(long long i=0;i<n;i++)
    {
        long long u;cin>>u;char s;cin>>s;
        for(long long j=0;j<u;j++)
            v.push_back(s);
    }
    for(long long i=0;i<v.size()/2;i++)
        l.push_back(v[i]);
    for(long long i=v.size()-1;i>=v.size()/2+1;i--)
        p.push_back(v[i]);
    f(l,p);
    return 0;
}
