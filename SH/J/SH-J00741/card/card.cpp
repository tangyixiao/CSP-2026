#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,m,a[500005];
int vis[300005],ans[300005];

signed main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    stack<int> st;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(vis[a[j]]==0){
                st.push(a[j]);
                vis[a[j]]=1;
            }
            else{
                while(1){
                    int t=st.top();
                    st.pop();
                    if(t==a[j]){
                        st.push(a[j]);
                        break;
                    }
                    else{
                        vis[t]=0;
                    }
                }
            }
        }
        while(!st.empty()){
            int t=st.top();
            vis[t]=0;
            ans[t]++;
            st.pop();
        }
    }
    for(int i=1;i<=m;i++){
        printf("%lld ",ans[i]);
    }
    return 0;
}