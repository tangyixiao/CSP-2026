#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
const int M = 3e5 + 5;

int n, m;
int a[N], ans[M];
int pre[N];
int fst[M];
bool vis[N];

int main() {
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		fst[i] = 0;
	}
	
	for (int i = 1; i <= n; i++) {
		pre[i] = fst[a[i]];
		fst[a[i]] = i;
	}	
	
	stack<int> st;
	for (int i = 1; i <= n; i++) {
		
		for (int j = 1; j <= n; j++) {
			vis[j] = 0; 
		}
		for (int j = i; j <= n; j++) {
			if (pre[j] >= i && !vis[pre[j]]) {
				while (!st.empty()) {
					int id = st.top();
					st.pop();
					vis[id] = 1;
					if (id == pre[j]) break;
				}
			}
			st.push(j); 
		}
		while (!st.empty()) {
			int id = st.top();
			st.pop();
			ans[a[id]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}

}
