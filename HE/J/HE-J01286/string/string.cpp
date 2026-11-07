#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long a[n];
	char c[n];
	string str;
	int len = 1;
	for (long long i = 0;i < n;i ++) {
		cin >> a[i] >> c[i];
		if (i != 0){
			if (c[i] != c[i - 1]) {
				for (long long j = 0;j < sqrt(a[i]);j ++) {
					str += c[i];
				}
			}
			else len ++;
		}
		
	}
	long long ans = 0;
	for (long long i = 0;i < sqrt(str.size());i ++) {
		if (str[i] != str[n - i]) {
			str[n - i] = str[i];
			ans ++;
		}
	}
	cout << ans * len;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
