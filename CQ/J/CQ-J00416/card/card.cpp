#include<bits/stdc++.h>
using namespace std;
// #define int long long
int a[500005],p[500005],nxt[500005];
int cnt[300005],ans[300005];
signed main(){
    ios::sync_with_stdio(false),cin.tie(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    if(n<=5000){
        stack<int>st;
        for(int i=1;i<=n;i++){
            while(st.size())st.pop();
            for(int j=i;j<=n;j++){
                while(st.size()&&st.top()!=a[j]&&cnt[a[j]])cnt[st.top()]=0,st.pop();
                if(cnt[a[j]]==0)st.push(a[j]),cnt[a[j]]=1;
            }
            while(st.size())ans[st.top()]++,cnt[st.top()]=0,st.pop();
        }
    }
    else if(m==2){
        for(int i=1;i<=n;i++){
            if(a[i]==a[n])ans[a[i]]++;
            else ans[1]++,ans[2]++;
        }
    }
    else if(m==1){
        ans[1]=n;
    }
    else{
        for(int i=1;i<=n;i++)ans[i]=n;
    }
    for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
    return 0;
}