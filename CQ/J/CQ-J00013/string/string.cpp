#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5+5;
struct{
    char c;
    int s;
} a[N];
int f[N];
int n;
int s;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i].s >> a[i].c;
        f[i] = f[i-1] + a[i].s;
    }

    int m = f[n];

    for(int i = 1; i <= m/2; i++) {
        int ib = m + 1 - i;
        int iid = upper_bound(f + 1, f + n + 1, i-1) - f;
        int ibid = upper_bound(f + 1, f + n + 1, ib-1) - f;
        //cout << i << ' ' << ib << endl;
        if(a[iid].c != a[ibid].c) {
            s++;
        }
    }

    cout << s;
}
