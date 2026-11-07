#include<bits/stdc++.h>
using namespace std;
long long n,m,q,w,e,a[200005],l,r,ans;
char c[200005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);    
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i]>>c[i];
    }
    l=1;
    r=n;
    while(l<=r)
    {
        if(a[l]==a[r])
        {
            if(c[l]!=c[r])
            {
                ans+=a[l];
            }
            l++;
            r--;
        }
        else if(a[l]<a[r])
        {
            if(c[l]!=c[r])
            {
                ans+=a[l];
            }
            a[r]-=a[l];
            l++;
        }
        else
        {
            if(c[l]!=c[r])
            {
                ans+=a[r];
            }
            a[l]-=a[r];
            r--;
        }
    }
    cout<<ans;
    return 0;
}//long long