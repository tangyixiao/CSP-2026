#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
int n, m, a[N], ans[N];
map<int, int> mp;
stack<int> st;
int main() {
//	freopen("card2.in", "r", stdin);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		mp.clear();
		while (st.size()) st.pop();
		for (int j = i; j <= n; j++) {
			if (mp[a[j]] == 0) st.push(j), mp[a[j]]++;
			else {
				while (a[st.top()] != a[j]) mp[a[st.top()]]--, st.pop();
				st.pop(), st.push(j);
			}
		}
		for (int j = 1; j <= m; j++) 
			if (mp[j]) ans[j]++;
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0; 
}
/*
10 3
3 1 2 1 3 2 3 1 2 1

4 3
1 2 1 3

*/