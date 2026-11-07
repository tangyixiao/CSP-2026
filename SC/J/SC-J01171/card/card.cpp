#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
int n, m, card[N], ans[N];
stack<int> st;
int inst[N];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> card[i];
	}
	for (int k = 1; k <= n; k++) {
		for (int i = k; i <= n; i++) {
			st.push(card[i]);
			inst[card[i]]++;
			if (inst[card[i]] == 2) {
				st.pop();
				while (st.top() != card[i]) {
					inst[st.top()]--;
					st.pop();
				}
				inst[card[i]] = 1;
			}
		}
		while (st.size()) {
			ans[st.top()]++;
			inst[st.top()] = 0;
			st.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}