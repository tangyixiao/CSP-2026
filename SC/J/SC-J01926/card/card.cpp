#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5, M = 3e5 + 5;
int n, m;
long long a[N];
long long ans[M];
bool vis[M];
long long st[N];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	for (int i = 1; i <= n; i ++){
		int top = 0;
		for (int j = i; j <= n; j ++){
			if (!vis[a[j]]) {
				st[++top] = a[j];
				vis[a[j]] = 1;
			} else {
				while (st[top] != a[j]) {
					vis[st[top]] = 0;
					top --;
				}
			}
		}
		for (int i = 1; i <= top; i ++) {
			ans[st[i]] ++;
			vis[st[i]] = 0;
		}
	}
	for (int i = 1; i <= m; i ++){
		cout << ans[i] << " ";
	}
	return 0;
}