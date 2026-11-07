#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m, s[100005], j = 0, mx;
	cin >> n >> m;
	while (n--) {
		j++;
		cin >> s[j];
	}
	if (m == 1) {
		cout << s[j];
		return 0;
	}
	for (int i = 1; i <j ; i++) mx = max(s[i - 1] and s[i], s[i + 1] and s[i]);
	cout << mx;
	return 0;
}