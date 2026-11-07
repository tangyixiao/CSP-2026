#include<cstdio>
#include<iostream>
using namespace std;

int n;
char c[200010];
long long a[200010],ans=0;

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    long long l=1,r=n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        cin>>c[i];
    }
    while(l<=r)
    {
        if(c[l]!=c[r])
        {
            ans+=min(a[l],a[r]);
            if(a[l]>a[r])
            {
                a[l]=abs(a[l]-a[r]);
                r--;
            }
            else
            {
                a[r]=abs(a[l]-a[r]);
                l++;
            }
        }
        else
        {
            if(a[l]>a[r])
            {
                a[l]=abs(a[l]-a[r]);
                r--;
            }
            else if(a[l]<a[r])
            {
                a[r]=abs(a[l]-a[r]);
                l++;
            }
            else
            {
                r--;
                l++;
            }
        }
    }
    cout<<ans;
    return 0;
}
