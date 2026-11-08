#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 2;
int n;
long long a[N];
//string s1;
string s;
long long size_1;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		char c;
		cin >> c;
		for (int j = 0; j < a[i]; j++) {
			s.push_back(c);
		}
		size_1 += a[i];
	}
	int mid = size_1 / 2;
	if (size_1 % 2 != 0) ans = mid;
	else ans = mid - 1;
	for (int i = 0; i < mid; i++) {
		if (s[i] == s[size_1-1-i]) {
			ans--;
		}
		if (!ans) break;
	}
	cout << ans;
	return 0;
}
