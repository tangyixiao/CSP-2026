#include <bits/stdc++.h>
using namespace std;
struct cards {
	int value, next;
};
int a[500010] = {};
cards desk[500010] = {};
int cnt[300010] = {};
int main () {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
//	cout << "ok" << endl;
	int deskl = 0;
	for (int i = 1; i <= n; i++) {
		//i为局数
//		cout << "i" << i << ":" << endl;
		bool visited[300010] = {};
		for (int j = i; j <= n; j++) {
			//j为打出的牌的下标
//			cout << "j" << j << ":" << endl;
			desk[++deskl].value  = a[j];
			desk[deskl].next = 0;
			bool found = false;
			int pos = 0;
			int t = 1;
			while (true) {
//				cout << "t" << t << ' ';
				if (desk[t].value == a[j]) {
					found = true;
					pos = t;
					break;
				}
				t = desk[t].next;
				if (t == 0) break;
			}
			if (found) {
				desk[pos - 1].next = deskl;
//				cout << "found" << endl;
			} else {
				desk[deskl - 1].next = deskl;
//				cout << "unfound" << endl;
			}
//			cout << "okk" << endl;
		}
//		cout << "okkk" << endl;
		int t = 1;
		while (true) {
			if (desk[t].value <= m && !visited[desk[t].value]) {
				cnt[desk[t].value]++;
				visited[desk[t].value] = true;
			}
			t = desk[t].next;
			if (t == 0) break;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << ' ';
	}
	return 0;
}
