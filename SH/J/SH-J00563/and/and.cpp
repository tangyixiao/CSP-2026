#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9; 
const int L = 31;
#define int long long
int n , m , a[N] , ans;
bool live[N];
//vector<int> k[L];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m; 
	for (int i = 1;i <= n;i++){
		cin >> a[i];
//		for (int p = 0;p <= 30;p++){
//			if ((1ll << p) & a[i]) {
//				k[i].push_back(a[i]);
//			}
//		}
	}
	fill(live+1,live+n+1,1);
	for (int i = 30;i >= 0;i --){
//		if (k[i].size() >= m){
//			ans |= (1 << i)	;
//			for (int j = 0;j < i; j++){
//				k[j].clear();
//			} 
//			for (auto v : k[i]){
//				
//			}
//		}
		vector <int> t, de;
		// 这个是 O(n*bit) bit = 30 , 大致是6e6 
		for (int j = 1;j <= n ;j ++){
			if (live[j] && ((a[j]) & (1 << i))){
				t.push_back(a[j]);
			}else if (live[j]){
				de.push_back(j);
			}
//			if (cnt < m){
//				break;
//			}
		}
		if (t.size() < m){
			continue;
		} 
		ans += (1 << i);
		
		// 这个循环均摊O(n) , 每个位置最多就被删除一次 
		for (auto j : de){
			live[j] = 0;
		}
	}
	cout << ans; 
	return 0;
}
