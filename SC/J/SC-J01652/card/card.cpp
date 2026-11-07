#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, m, a[500005], cnt[300005], ans[300005];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	for(int k=1; k<=n; k++){
		stack<int> st;
		memset(cnt, 0, sizeof cnt);
		for(int i=k; i<=n; i++){
			st.push(a[i]);
			cnt[a[i]]++;
			if(cnt[a[i]]==2){
				while(!st.empty()){
					cnt[st.top()]--;
					st.pop();
					if(st.top()==a[i]){
						break;
					}
				}
			}
		}
		while(!st.empty()){
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i=1; i<=m; i++){
		cout << ans[i] << " ";
	} 
	return 0;
}