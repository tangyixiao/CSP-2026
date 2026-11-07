#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500005],ans[300005],vis[300005];
//vector <int> s[300005];
void solve1(){
	stack <int> st;
	for (int i = 1;i <= n;i++){
		fill(vis + 1,vis + m + 1,0);
		for (int j = i;j <= n;j++){
			if (vis[a[j]]){
				while (st.top() != a[j]){
					vis[st.top()] = 0;
					st.pop();
				}
			}else{
				st.push(a[j]);
				vis[a[j]] = 1;
			}
		}
		while (st.size()){
			st.pop();
		}
		for (int j = 1;j <= m;j++){
			ans[j] += vis[j];
		}
	}
	for (int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
//		s[a[i]].push_back(i);
	}
	if (n <= 5000){
		solve1();
		return 0;
	}
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/