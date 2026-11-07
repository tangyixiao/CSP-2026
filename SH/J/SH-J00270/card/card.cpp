#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[300005];
bool flag=1,vis[300005];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i = 1;i <= n;++i)
    {
        cin>>a[i];
        if((i!=1)&&(a[i]>a[i-1])) flag=0;
    }
    if(flag)
    {
        int ans[300005];
        for(int i = 1;i <= n;++i) ans[i]=i;
        for(int i = 1;i <= m;++i) cout<<ans[i]<<" ";
        return 0;
    }
    for(int i = 1;i <= n;++i)
    {
        stack<int> st;
        memset(vis,0,sizeof(vis));
        for(int j = i;j <= n;++j)
        {
            if(!vis[a[j]])
            {
                st.push(a[j]);
                vis[a[j]]=1;
                cnt[a[j]]++;
            }
            else
            {
                while(st.top()!=a[j])
                {
                    vis[st.top()]=0;
                    cnt[st.top()]--;
                    st.pop();
                }
            }
        }
    }
    for(int i = 1;i <= m;++i) cout<<cnt[i]<<" ";
    return 0;
}
