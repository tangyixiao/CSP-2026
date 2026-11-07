#include <bits/stdc++.h>
using namespace std;

int ttot(int x) {
	string tow = "";
	while (x != 0) {
		tow += char(x % 2 + 48);
		x = x / 2;
	}
	string fan = "";
	for (int i = tow.size() - 1; i >= 0; i--) {
		fan += tow[i];
	}
	return stoi(fan);
}

int main() {
	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int num[n];
	int maxx = -9999999;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {//ok
		int andd = 0 ;
		for (int j = i; j < j - i; j++) {
			for (int k = 0; k < m; k++) {//ok
				andd = andd &ttot(num[k]);
			}
		}
		if (andd > maxx) {
			maxx = andd;
		}
	}
	cout << maxx;
	return 0;
}
