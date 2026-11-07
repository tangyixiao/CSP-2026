#include <bits/stdc++.h>
using namespace std;
int n, tmp, fwui, beif[128], ans, hou;
long long sum;
string wgbeo;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> tmp >> hou;
		beif[hou] += tmp;
		sum += tmp;
	}
	if (sum % 2 == 0)
		fwui = sum / 2 - 1;
	else
		fwui = sum / 2;
	hou = 97;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < beif[i]; j++) {
			wgbeo[j] = hou + i;
		}
	}
	for (int i = fwui; i <= sum - 1; i++) {
		if (wgbeo[i] != wgbeo[abs(fwui - i)])
			ans++;
	}
	cout << ans;
	return 0;
}
