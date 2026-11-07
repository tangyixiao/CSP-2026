#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500000+10];
bool vis[300000+10];
int cnt[300000+10];
stack<int> st;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i=1;i<=n;i++) {
		cin >> a[i];
	}
	for (int i=1;i<=n;i++) {
		for (int j=i;j<=n;j++) {
			if (vis[a[j]]) {
				while (!st.empty() && st.top()!=a[j]) {
					vis[st.top()]=0;
					st.pop();
				}	 
			}
			else {
				st.push(a[j]);
				vis[a[j]]=1;
			}
		}
		while (!st.empty()) {
			cnt[st.top()]++;
			vis[st.top()]=0;
			st.pop();
		} 
	}
	for (int i=1;i<=m;i++) {
		cout << cnt[i] << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
