#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5*1e5+5,MAXM = 3*1e5+5;
int n,m,a[MAXN],cnt[MAXM];
int state[MAXM];
stack<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i<=n;i++){
		cin >> a[i];
	}
	for (int zong = 1;zong<=n;zong++){
		for (int i = 1;i<=m;i++){
			state[i] = 0;
		}
		for (int i = zong;i<=n;i++){
			if(state[a[i]]){
				while (q.top()!=a[i]){
					state[q.top()]--;
					q.pop();
				}
				q.pop();
				state[a[i]]--;
			}
			state[a[i]]++;
			q.push(a[i]);
		}
		while (!q.empty()){
			int u = q.top();
			cnt[u]++;
			q.pop();
		}
	}
	for (int i = 1;i<=m;i++){
		cout << cnt[i] << " ";
	} 
	return 0; 
}
