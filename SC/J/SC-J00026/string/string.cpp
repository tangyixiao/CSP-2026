#include <bits/stdc++.h>
using namespace std;
char a[200000000] = {};

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out","w", stdout);
	char s;
	int n, num, cnt = 0, len = 0;
	
	//输入数据
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num >> s;
		for (int j = 0; j < num; j++) {
			a[len] = s;
			len++;
		}
	}
	
	//逻辑实现 
	for (int i = 0; i * 2 < len + 1; i++) {
		if (a[i] != a[len - i - 1]) cnt++;
	}
	cout << cnt;
	return 0;
}