#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 20;
int n, m, a[N], num[35], ans;
vector<int> vec, tag;

signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%lld%lld", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%lld", &a[i]);
		for(int j = 0; j <= 30; j++){
			if((a[i] >> j) & 1) num[j] ++;
		}
		vec.push_back(a[i]);
	}
	for(int i = 30; i >= 0; i--){
		if(num[i] < m) continue;
		ans += (1ll << i);
		tag.clear();
		for(int j : vec){
			if((j >> i) & 1) tag.push_back(j);
			else{
				for(int k = 0; k <= 30; k++){
					if((j >> k) & 1) num[k] --;
				}
			}
		}
		vec = tag;
	}
	printf("%lld", ans);
	return 0;
}