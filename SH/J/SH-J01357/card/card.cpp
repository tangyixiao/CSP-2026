#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
bool u[500005];
int ans[500005];
stack<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i=1;i<=n;i++)cin >> a[i];
	int lft = 0;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++)u[j] = 0;
		for (int j=i;j<=n;j++){
			if (!u[a[j]])u[a[j]] = 1;
			else{
				while (q.top() != a[j]){
					u[q.top()] = 0;
					q.pop();
				}
				q.pop();
			}
			q.push(a[j]);
		}
		while (q.size()){
			ans[q.top()]++;
			q.pop();
		}
	}
	for (int i=1;i<=m;i++)cout << ans[i] << ' ';
	return 0;
}
