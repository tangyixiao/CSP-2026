#include <bits/stdc++.h>
using namespace std;
int c = 1,vis[200005],n,m,a[200005],b[200005];
void dfs(int x){
    if (x == m+1){
        int t = 1;
        for (int i = 1; i <= m; i++){
            t = t & b[i];
        }
        c = max(c,t);
        return;
    }
    for (int i = 1; i <= n; i++){
        if (vis[i] == 0){
            vis[i] = 1;
            b[i] = a[i];
            dfs(x+1);
            vis[i] = 0;
        }
    }
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    c = 1;
    if (m == n){
        for (int i = 1; i <= m; i++){
            c = c & a[i];
        }
    }
    sort(a+1,a+n+1);
    if (m == 1){
        c = a[n];
    }
    else if (m == 2){
        for (int i = 2; i <= n; i++){
            for (int j = 1; j < i; j++){
                if (a[i] & a[j] > c){
                    c = a[i] & a[j];
                }
            }
        }
    }
    else{
        dfs(1);
    }
    cout << c;
    return 0;
}
