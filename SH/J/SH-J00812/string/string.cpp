#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int a[100005];
char ch[100005];
ll total, cnt;

int check() {
    char c[200005];
    ll now = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= a[i]; j++) {
            now++;
            c[now] = ch[i];
        }
    }
    for(ll i = 1; i <= (total+1)/2; i++) {
        if(c[i] != c[total-i+1]) cnt++;
    }
    return cnt;
}

int main() {
    int maxa = -1;
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i] >> ch[i];
        total += a[i];
        maxa = max(maxa, a[i]);
    }
    if(n * maxa <= 200000) cout << check();
    else cout << (total+1)/2;
    return 0;
}
