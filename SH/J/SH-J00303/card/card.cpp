#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
bool flag[300005];
int ans[300005];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    stack<int> sta;
    for (int i=1;i<=n;i++)
    {
        memset(flag,0,n+1);
        for (int j=i;j<=n;j++)
        {
            if (flag[a[j]]==1)
            {
                while (!sta.empty())
                {
                    int x=sta.top();
                    if (x==a[j])
                    {
                        break;
                    }
                    flag[x]=0;
                    sta.pop();
                }
                flag[a[j]]=1;
            }
            else{
                sta.push(a[j]);
                flag[a[j]]=1;
            }
        }
        while (!sta.empty())
        {
            int x=sta.top();
            ans[x]++;
            //cout<<x<<" ";
            sta.pop();
        }
        //cout<<endl;
    }
    for (int i=1;i<=m;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
