#include <bits/stdc++.h>
using namespace std;
bool cmp(int c,int d)
{
    return c>d;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    long long n,m,s=0;
    long long a[200000]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    s=a[0];
    for(int i=1;i<m;i++)
    {
        s=(s&a[i]);
    }
    cout<<s;
    return 0;
}
