#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll p[5000001];
map <ll, ll> mp;
map <char, ll> lpo;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ll a, b;
	string c = "";
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		cin >> p[i];
	}
	ll o = 0;
	for (int j = 1; j <= a; j++) {
		c += p[j];
		for (int l = 0; l < c.size(); l++) {
			if (c[l] == p[j]) {
				o = l;
			}
			if (o > 0) {
				for (int g = o; g < j; g++) {
					mp[g] = 1;
				}
			}
		}
		for (int h = 0; h < c.size(); h++) {
			if (mp[h] != 1) {
				lpo[c[h]]++;
			}
		}
	}
	for (int i = 1; i <= b; i++)
		cout << lpo[c[h]] << " ";
	return 0;
}
