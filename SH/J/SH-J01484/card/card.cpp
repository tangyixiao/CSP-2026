#include<cstdio>
#include<iostream>
using namespace std;

int n,m,a[500010],ans[300010];

int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int k=1;k<=n;k++)
    {
        int cnt[300010];
        for(int i=k;i<=n;i++)
        {
            if(cnt[a[i]]!=0)
            {
                for(int j=i-1;j>=k;j--)
                {
                    cnt[a[j]]--;
                }
                cnt[a[i]]++;
            }
            else
            {
                cnt[a[i]]++;
            }
        }
        for(int i=1;i<=m;i++)
        {
            if(cnt[i]!=0)ans[i]++;
        }
    }
    for(int i=1;i<=m;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
