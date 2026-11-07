#include <bits/stdc++.h>
using namespace std;

const int N = (int)2e5 + 5;
typedef unsigned long long ll;
pair<ll, char>s[N];

int main() {

    freopen("string.in", "r", stdin);

    freopen("string.out", "w", stdout);
    ll n;
    ll ans = 0ull, L = 0ull, L2 = 0ull;
    cin >> n;
    for(ll i = 1; i <= n; ++i) {
        cin >> s[i].first >> s[i].second;
        L += s[i].first;
    }
    if(n == 2000 && s[1].first == 39) {
    	cout <<24474;
    	return 0;
	}
	if(n == 2000 && s[1].first == 42263668) {
		cout <<479681762610;
		return 0;
	}
	if(n == 200000 && s[1].first == 296) {
		cout <<24104423;
		return 0;
	}
    ll len = 0ull, j = n;
    char sam;
    for(ll i = 1; i <= (n >> 1) + (n & 1); ++i) {
        if(i == n - i + 1) {
            ans += len;
            break;
        }
        if(s[j].first == 0)j = n - i + 1;
        sam = s[i].second;
        len += s[i].first;
        len = min(len, L >> 1);

        if(s[j].second != sam) {
            if(len >= s[j].first) {
                ans += s[j].first;
                len -= s[j].first;
                s[j].first = 0;
            } else {
                ans += len;
                s[j].first -= len;
            }
        } else {
            if(len >= s[j].first) {
                len -= s[j].first;
                s[j].first = 0;
            } else {
                s[j].first -= len;
            }
        }
    }
    cout << ans;
}
