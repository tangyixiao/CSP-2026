#include <iostream>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string S = "";
	string T = "";
	int n;
	cin >> n;
	int a;
	string x;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		cin >> x;
		for (int j = 0; j < a; j++) {
			S += x;
		}
	}
	long long s = S.size();
	//cout << s;
	for (long long z = s - 1; z >= 0; z--) {
		T += S[z];
	}

	//cout << T;
	//cout << S;
	for (long long k = 0; k < s / 2; k++) {
		//if (s % 2 == 1) {
		if (S[k] != S[s - k - 1]) {
			cnt++;
		}
		//} //else if (s % 2 == 0) {
		//	if (S[k] != S[s - k - 1]) {
		//	cnt++;
		//	}
		//	}
	}
	cout << cnt;
	return 0;
}
