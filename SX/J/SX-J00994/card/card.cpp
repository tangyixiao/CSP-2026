#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	long long card[n + 5] = {0};
	long long have[m + 5] = {0};
	for (long long i = 1; i <= n; i++) {
		long long x;
		cin >> x;
		card[i] = x;
	}
	for (long long i = 1; i <= n; i++) {
//		cout << "新一局" << endl;
		long long lastthisnumber[n + 5] = {0};
		long long desk[n + 5] = {0};
		for (long long j = i; j <= n; j++) {
			desk[j] = card[j];
//			cout << "打出" << card[j] << endl;
			if (lastthisnumber[card[j]] == 0) {
				lastthisnumber[card[j]] = j;
			} else {
//				cout << "开始移除,原因" << card[j] << endl;
				for (long long l = lastthisnumber[card[j]]; l < j; l++) {
//					cout << "移除" << desk[l] << endl;
					lastthisnumber[desk[l]] = 0;
					desk[l] = 0;
				}
				lastthisnumber[card[j]] = j;
			}
		}
//		cout << "清点存活" << endl;
		for (long long j = i; j <= n; j++) {
			have[desk[j]]++;
//			cout << desk[j] << "存活" << endl;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << have[i] << " ";
	}
	return 0;
}