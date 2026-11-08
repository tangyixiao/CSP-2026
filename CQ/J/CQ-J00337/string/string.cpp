#include<bits/stdc++.h>
using namespace std;
string a[200005];
string a1[20000000005];
string a2[20000000005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n,x2=0;
    int cnt;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        long long x1;
        cin>>x1>>a[i];
        for(long long j=1;j<=x1;j++)
        {
            a1[j+x2]=a[i];
        }
        x2+=x1;
    }
    for(long long i=1;i<=x2;i++)
    {
        a2[i]=a1[x2+1-i];
    }
    for(long long i=1;i<=(x2/2);i++)
    {
        if(a1[i]!=a2[i])cnt++;
    }
    cout<<cnt;
}