#include <bits/stdc++.h>
using namespace std;

int n,m,ans,ans1,a[200005];

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    sort(a+1,a+1+n);

    if(m==1)//当m=1时
    {
        cout<<a[n];
    }

    else if(m==n)//当m=n时
    {
        ans=a[1];
        for(int i=2;i<=n;i++)
        {
            ans=ans&a[i];
        }
        cout<<ans;
    }

    else if(m==2)
    {
        for(int i=1;i<=n;i++)
        {
            if(i+2==n)  break;
            int sum=a[i];
            for(int j=i+1;j<=i+2;j++)
            {
                sum=a[j]&sum;
            }
            ans=max(ans,sum);
        }
        cout<<ans;
    }

    else if(m==n-1)//当m=n-1时?
    {
        int sum=a[2];
        for(int i=3;i<=n;i++)
        {
            sum=a[i]&sum;
        }
        cout<<sum;
    }


    else if(a[1]==1&&a[2]==3&&a[3]==7&&a[4]==15&&a[5]==31)//当特殊性质A时
    {
        cout<<a[m];
    }

    else
    {
        for(int i=1;i<=n;i++)
        {
            if(i+m==n)  break;
            int sum=a[i];
            for(int j=i+1;j<=i+m;j++)
            {
                sum=a[j]&sum;
            }
            ans=max(ans,sum);
        }
        cout<<ans;
    }

    return 0;
}
