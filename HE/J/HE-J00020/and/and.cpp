#include <bits/stdc++.h>
#define int long long
using namespace std;
namespace qwq{
    static int n,m,ans = -1e6;
    static vector<int> a;
    static void dfs(vector<bool> &selected,int an,int cnt) noexcept{
        if(cnt == m){
            ans = max(ans,an);
            return;
        }
        for(int i = 1;i <= n;i++){
            if(!selected[i]){
                auto tmp = selected;
                tmp[i] = true;
                dfs(tmp, an & a[i],cnt+1);
            }
        }
    }
    static void main() noexcept{
        cin >> n >> m;
        a.resize(n+1);
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        for(int i = 1;i <= n;i++){
            vector<bool> selected(n+1);
            selected[i] = true;
            dfs(selected,a[i],1);
        }
        cout << ans << "\n";
    }
}
signed main() noexcept{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    qwq::main();
    return 0;
}
