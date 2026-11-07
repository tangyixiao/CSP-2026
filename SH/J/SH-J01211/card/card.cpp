#include<bits/stdc++.h>
#include<stack>
#include<algorithm>
#include<map> 
using namespace std;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n = 0, m = 0, c[500010] = {}, ans[500010] = {};
	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> c[i];
	for (int k = 0; k < n; ++k) {
		stack<int> st;
		bool mp[500010] = {};
		for (int i = 0; i < n - k; ++i) {
			if (!mp[c[i]]) {
				int card = c[i];
//				cout << card;
				st.push(card);
				mp[card] = true;
			}
			else {
				while (st.top() == c[i]) {
					mp[st.top()] = false;
					st.pop();
				}
			}
		}
		for (int j = 0; j < m; ++j) ans[j] += mp[j];
	}
	for (int j = 0; j < m; ++j) cout << ans[j] << " ";
	return 0;
}
//freopen wcÁË ÕâÍæÒâÔõÃ´ÓÖ³é·ç return 3221225725ÊÇÉ¶  Õâ18ÐÐµÄifÔõÃ´¸únm±»×çÖäÁËÒ»Ñù wcÁË ËÀÁË °¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡  Ã»¾ÈÁË OI(2022.9-2026.10.31)
