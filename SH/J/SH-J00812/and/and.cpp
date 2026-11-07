#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200005];
int maxn;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("and5.in", "r", stdin);
    freopen("and.out", "w", stdout);
    int maxa = -1;
    int mina = 2 * 1e9;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        maxa = max(maxa, a[i]);
        mina = min(mina, a[i]);
    }
    if(m == 1) {
        cout << maxa;
        return 0;
    }
    else if(m == n) {
        int sp_ans1 = a[1];
        for(int i = 2; i <= n; i++) {
            sp_ans1 = sp_ans1 & a[n];
        }
        cout << sp_ans1;
        return 0;
    }
    else if(m == 2) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i == j) continue;
                maxn = max(a[i] & a[j], maxn);
            }
        }
        cout << maxn;
        return 0;
    }
    else if(m == n-1) {
        int sp_ans2 = maxa;
        for(int i = 1; i <= n; i++) {
            if(a[i] == mina) continue;
            sp_ans2 = sp_ans2 & a[i];
        }
        cout << sp_ans2;
        return 0;
    } else {
    	sort(a+1, a+n+1);
        int ans = maxa;
        for(int i = 1; i <= m; i++) {
            ans = ans & a[n-i+1];
        }
    cout << ans;
    }
    return 0;
}
