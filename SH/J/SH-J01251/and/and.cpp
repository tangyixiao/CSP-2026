#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans,chosen;
bool check(int x) {
    while(x >= 2) {
        if(x & 1) return false;
        x /= 2;
    }
    return true;
}
int main() {
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    while(check(a[n]) && n > m) n--;
    ans = a[n],chosen = 1;
    for(int i = n - 1;i >= 1 && chosen < m;i--)
        ans &= a[i],chosen++;
    cout << ans;
    return 0;
}
