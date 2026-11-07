#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
long long tot=0,ans=0;
char c[200005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i = 1;i <= n;++i)
    {
        cin>>a[i]>>c[i];
        tot+=a[i];
    }
    long long mid=ceil(tot/2.0),l=1,r=n,k=0;
    while(k<mid)
    {
        if(k+a[l]>mid)
        {
            if(tot%2==0) a[l-1]=mid-k;
            else a[l-1]=mid-k-1;
            a[l]=a[l]+k-mid;
            c[l-1]=c[l];
            k=mid;
            l--;
        }
        else k+=a[l];
        int now=0;
        while(now<a[l])
        {
            bool f=0;
            long long z;
            if(now+a[r]>a[l])
            {
                z=a[l]-now;
                a[r]=a[r]-a[l]+now;
                now=a[l];
                f=0;
            }
            else
            {
                now+=a[r];
                z=a[r];
                f=1;
            }
            if(c[r]!=c[l]) ans+=z;
            if(f) r--;
        }
        l++;
    }
    cout<<ans;
    return 0;
}
