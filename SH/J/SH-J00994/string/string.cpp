#include<bits/stdc++.h>
using namespace std;
int n,a[100005],c[100005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>c[i];
    }
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    if(n==2)
    {
        if(a[1]==a[2])
        {
            cout<<0;
        }
        if(a[1]<a[2]&&(a[1]+a[2])%2==0)
        {
            cout<<(a[2]-a[1])%2;
        }
        else
        {
            cout<<a[1];
        }
        if(a[1]>a[2]&&(a[1]+a[2])%2==0)
        {
            cout<<(a[1]-a[2])%2;
        }
        else
        {
            cout<<a[2];
        }
        return 0;
    }
    if(n==3)
    {
        if(a[1]==a[2]&&a[2]==a[3])
        {
            cout<<0;
        }
        if(a[1]<a[2]&&a[2]==a[3])
        {
            cout<<a[1];
        }
        if(a[2]>a[3]&&a[1]>a[2])
        {
            cout<<a[3];
        }
        return 0;
    }
    return 0;
}
