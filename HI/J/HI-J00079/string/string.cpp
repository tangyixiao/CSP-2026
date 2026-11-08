#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int n;
int arr[N];
char c[N];
string s = "";
int cnt;
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> arr[i] >> c[i];
		for (int j = 1;j <= arr[i];j++) {
			s += c[i];
		}
	}
	int a = 0,b = s.size() - 1;
	for (int i = 1;i <= s.size() / 2;i++) {
		if (s[a] != s[b]) {
			cnt++;
		}
		a++;
		b--;
	}
	cout << cnt;
	return 0;
} 
