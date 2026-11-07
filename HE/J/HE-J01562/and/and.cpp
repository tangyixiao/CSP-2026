#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    long long n,m;
    cin>>n>>m;
    long long a[i];
    for(int i=1;i<=n;i++)
    {
        m<=n;
    }
    vector<long long>a(n+1);
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=a[i+1])
        {
            cout<<a[i];
        }
        else if(a[i]<a[i+1])
        {
            cout<<a[i+1];
        }
    }
    int maxn;
    cin>>maxn;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>maxn)
        {
            maxn=a[i];
        }
    }
    cout <<maxn;
    return 0;
}
