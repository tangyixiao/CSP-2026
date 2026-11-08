#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
long long a[100005];
string c[100005];
long long ans;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;++i) {
		cin >> a[i] >> c[i];
		for(int j = 1;j <= a[i];++j) {
			s += c[i];
		}
	}
	int l = s.size();
	for(int i = 0;i * 2 < l;++i) {
		if(s[i] != s[l - i - 1]) {
			ans += 1;
		}
	}
	cout << ans;
	return 0;
}
