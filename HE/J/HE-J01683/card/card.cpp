/*
开考怎么还晚了（？
T1 有点恶心人，简单 string 判断即可 
T2 双指针
T3 按位贪心
T4 阅读理解，转化完之后是一颗树
红橙黄黄 的样子？
不敢相信我 100 分钟做完题了，赶紧检查，写拍子 
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
const int N = 5e5+10;
int a[N]; int lst[N];
vector <int> g[N];
int sz[N]; int ans[N];
void dfs(int u,int fa){
    sz[u] = 1;
    for (int v:g[u]){
        if (v == fa) continue;
        dfs(v,u);
        sz[u] += sz[v];
    }
    ans[a[u]] += sz[u];
}
signed main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false); cin.tie(nullptr); 
    cin >> n >> m;
    for (int i=1;i<=n;i++) cin >> a[i],lst[a[i]] = i;
    for (int i=1;i<=n;i++){
        g[lst[a[i]] + 1].push_back(i);
    }
    dfs(n+1,0);
    for (int i=1;i<=m;i++) cout << ans[i] << " "; 
    return 0;
}
