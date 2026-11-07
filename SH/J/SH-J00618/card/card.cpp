#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 500005, M = 300005;
ll n, m, a[N], mp[M], t[N], sz, ans[M], flag[M];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; ++ i){
		cin >> a[i];
	}
	
	for(int i = 1; i <= n; ++ i){
		sz = 0;
		for(int j = 1; j <= m; ++ j) mp[j] = 0;
		
//		printf("i = %d\n", i);
		for(int j = i; j <= n; ++ j){
			if(mp[a[j]] && mp[a[j]] <= sz){
				for(int i = mp[a[j]] + 1; i <= sz; ++ i)
					mp[t[i]] = 0;
				sz = mp[a[j]] - 1;
			}
			mp[a[j]] = ++ sz;
			t[sz] = a[j];
//			for(int j = 1; j <= sz; ++j)
//				cout << t[j] << ' ';
//			cout << endl;
		}
		
		for(int j = 1; j <= m; ++ j) flag[j] = 0;
		for(int j = 1; j <= sz; ++ j)
			if(!flag[t[j]])
				++ ans[t[j]], flag[t[j]] = true;
	}
	
	for(int i = 1; i <= m; ++ i)
		cout << ans[i] << ' ';
	return 0;
}
