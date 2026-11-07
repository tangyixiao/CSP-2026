#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=5e5+5;
ll n,m,a[N],vis[N],ans[N];
stack<ll> st;

int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            vis[a[j]]=0;
        }
        while(!st.empty())
            st.pop();
        for(int j=i; j<=n; j++)
        {
            //   cout<<a[j]<<" "<<vis[a[j]]<<endl;
            if(vis[a[j]]==0)
            {
                st.push(a[j]);
                vis[a[j]]=1;
            }
            else
            {
                while(!st.empty()&&vis[a[j]]==1)
                {
                    ll x=st.top();
                    st.pop();
                    vis[x]=0;
                }
                st.push(a[j]);
                vis[a[j]]=1;
            }
        }
        for(int j=1; j<=m; j++)
        {
            ans[j]+=vis[j];
        }
    }
    for(int i=1; i<=m; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
