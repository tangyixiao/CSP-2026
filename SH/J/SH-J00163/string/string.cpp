#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    string s;
    int n;
    cin>>n;
    long long cur=0;
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        long long x;
        char op;
        cin>>x>>op;
        s.insert(cur,x,op);
        cur+=x;
    }
    for(int i=0;i<=(cur+1)/2;i++)
    {
        if(s[i]!=s[cur-i-1])
        {
            ans++;
            cout<<" "<<i<<" ";
        }
    }
    printf("%lld",ans);
    return 0;
}
