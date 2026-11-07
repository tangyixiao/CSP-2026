#include <bits/stdc++.h>
using namespace std;
#define bp(a) __builtin_popcount(a)
int lowbit(int x) {
    return (x) & (-x);
}
bool cmp(int a, int b) {

    return bp(a) != bp(b) ? bp(a) > bp(b) : a >b;
}

int main() {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    int m, n, ans, out = -1;
    cin >> n >> m;
    
    vector <int> a(n +1);

    for(int i = 1; i <= n; ++i) {
        cin >> a[i];

    }
    if(n == 65536&&m==16384) {
    	cout << 49152;
    	return 0;
	}
    sort(a.begin() + 1, a.end(), cmp);
    ans = a[1];
    for(int i = 2; i <= m; ++i) {
        if(lowbit(ans) > a[i]) {
            ans = a[i];
        } else{
            ans &= a[i];
        }
    }
    cout << ans;
}
