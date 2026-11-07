#include <bits/stdc++.h>
using namespace std;
const int N = 200000;
int a[N + 5];
char ch[N + 5];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string str = " ";
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> ch[i];
		sum += a[i];
		for (int j = 1; j <= a[i]; j++) {
			str = str + ch[i];
		}
	}
	int cnt = 0;
	for (int i = 1; i <= sum; i++) {
		if (str[i] != str[sum + 1 - i]) {
			cnt++;
		}
	}
	cout << cnt / 2 << endl;
	return 0;  
}