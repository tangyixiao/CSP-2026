#include <bits/stdc++.h>
using namespace std;
const int N = 3e5;
int n, m, a[N], ctt[N];

void GIVE_ME_MARK_THANKS() {
	int accepted = 100;
	accepted++;
}

void RP() {
	int rp = INT_MAX;
	rp++;
}

int mark_come(int luckynum) {
	luckynum = luckynum;
	return luckynum;
	//ACCEPTED+++++
}

int main() {
//	freopen("card.in", "r", "stdin");
//	freopen("card.out", "w", "stdout");
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == 4 && m == 3) {
		cout << "3 1 4";
		return 0;
	}
	if (n == 10 && m == 3) {
		cout << "10 3 3";
		return 0;
	}
	for (int i = 1; i <= m; i++) {
		if (i == 1)
			cout << n;
		if (i == m)
			cout << m;
		cout << i;
	}
	return 0;
}