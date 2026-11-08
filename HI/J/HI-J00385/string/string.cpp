#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define bep(i, a, b) for(int i = (a); i >= (b); i--)
using namespace std;
const int maxn = 2e5 + 5;
const ll timess = 1e8 + 5;
int n;
struct Node {
	ll number;
	char letter;
} a[maxn];
vector<Node> lh;
vector<Node> rh;
int main() { 
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	ll sum = 0, maxx = 0;
	char last;
	rep(i, 1, n) {
		ll b;
		char c;
		cin >> b >> c;
		sum += b;
		if(last == c) {
			a[i - 1].number += b;
			maxx = max(maxx, a[i - 1].number);
			i--;
			n--;
		}
		else {
			maxx = max(maxx, b);
			a[i].number = b;
			a[i].letter = c;
		}
		last = c;
	}
	if(n == 1) {
		cout << "0\n";
		return 0;
	}
	if(n * maxx  <= timess) {
		string s;
		rep(i, 1, n) {
			rep(j, 1, a[i].number) {
				s += a[i].letter;
			}
		}
		ll len = s.size() - 1;
		ll ans = 0;
		rep(i, 0, len / 2) {
			ll l = i, r = len - i;
			if(s[l] != s[r]) ans++; 
		}
		cout << ans;
	}
	else {
		int m2 = sum % 2;
		sum /= 2;
		ll ns = 0, idx = 1;
		while(ns < sum) {
			ns += a[idx].number;
			if(ns >= sum) {
				lh.push_back({a[idx].number - (ns - sum), a[idx].letter});
				rh.push_back({ns - sum - m2, a[idx].letter});
				continue;
			}
			lh.push_back({a[idx].number, a[idx].letter});
			idx++;
		}
		idx++;
		while(idx <= n) {
			rh.push_back({a[idx].number, a[idx].letter});
			idx++;
		}
		ll ans = 0;
		for(int i = 0, j = (int)rh.size() - 1; i < (int)lh.size(), j >= 0; ) {
			if(lh[i].number == rh[j].number) {
				if(lh[i].letter == rh[i].letter) {
					i++;
					j--;
					continue;
				}
				ans += lh[i].number;
			}
			else if(lh[i].number < rh[j].number){
				rh[j].number -= lh[i].number;
				if(lh[i].letter != rh[j].letter) {
					ans += lh[i].number;
				}
				i++;
			}
			else {
				lh[i].number -= rh[j].number;
				if(lh[i].letter != rh[j].letter) {
					ans += rh[i].number;
				}
				j--;
			}
		}
		cout << ans;
	}
	return 0;
}
