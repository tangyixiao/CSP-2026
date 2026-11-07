#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
ll cnt;
ll L;
vector<int> len;
vector<ll> slen;
vector<char> ch;

int main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    len.resize(n);
    ch.resize(n);
    slen.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> len[i] >> ch[i];
        if (i == 0) slen[i] = len[i];
        else slen[i] = slen[i-1] + len[i];
    }
    L = slen[n-1];

    ll l = 0;
    ll r = L - 1;
    int il = 0, ir = n-1;
    ll dl = slen[il]-l;
    ll dr = r-slen[ir-1];

    while (l < r) {
        dl = slen[il]-l;
        dr = r+1-slen[ir-1];

        if (dl > dr) {
            if (ch[il] != ch[ir]) cnt += dr;
            l += dr;
            ir--;
        } else {
            if (ch[il] != ch[ir]) cnt += dl;
            l += dl;
            il++;
            if (dl == dr) ir--;
        }
        r = L - l - 1;

    }
    cout << cnt;
    return 0;
}
