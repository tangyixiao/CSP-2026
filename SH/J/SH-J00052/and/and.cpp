#include<bits/stdc++.h>
using namespace std;

int n,m;

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%d %d",n,m);
    vector<long long> a(n);

    for(int i=0;i<n;i++)
    {
        scanf("%d ",a[i]);
    }

    if(m=1)
    {
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>ans) ans=a[i];
        }
        printf("%d",ans);
    }
    if(m=n-1)
    {
        int ans=0;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<ans)
            {
                ans=a[i];
                temp=i;
            }
        }
        a.erase(i);

        long long sum=a[0];
    for(int i=1;i<n-1;i++)
    {
        sum&=a[i];
    }

    printf("%d",sum);
    }


    if(m=n)
    {long long sum=a[0];
    for(int i=1;i<n;i++)
    {
        sum&=a[i];
    }

    printf("%d",sum);}

    return 0;
}
