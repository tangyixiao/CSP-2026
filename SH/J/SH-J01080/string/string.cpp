#include<bits/stdc++.h>
using namespace std;
string s;
long long ans,cnt;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        long long a;
        char p;
        cin>>a>>p;
        ans+=a;
        for(long long j=1;j<=a;j++)
        {
            s+=p;
        }
    }
    for(long long i=0;i<=(ans+1)/2-1;i++)
    {
        if(s[i]!=s[ans-i-1])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
