#include <bits/stdc++.h>
using namespace std;
int n,m,a[200010],cnt[30],ans;
void dfs(int i,int sum,int step){
    if (sum < ans){
        return;
    }
    if (step == m){
        ans = max(ans,sum);
        return;
    }
    for (int j = i - 1; j >= m - step; j--){
        dfs(j,sum & a[j],step + 1);
    }
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        int x,y = 1,z = 0;
        cin >> x,a[i] = x;
        while (x >= y * 2){
            y *= 2,z++;
        }
        while (y){
            if (x >= y){
                x -= y,cnt[z]++;
            }
            y /= 2,z--;
        }
    }
    if (n * m >= 100000000){
        int minn = (1 << 30);
        for (int i = 1; i <= n; i++){
            minn = min(minn,a[i]);
        }
        cout << minn;
        return 0;
    }
    for (int i = 29; i >= 0; i--){
        for (int j = 1; j <= n; j++){
            if (cnt[i] < m && a[j] >= (1 << i)){
                a[j] -= (1 << i);
            }
        }
    }
    sort(a + 1,a + n + 1);
    for (int i = n; i >= m; i--){
        dfs(i,a[i],1);
    }
    cout << ans;
    return 0;
}
