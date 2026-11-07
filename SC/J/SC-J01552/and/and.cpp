#include<bits/stdc++.h>
using namespace std;
long long n, m, a[200005], cnt[40];
bool Ecnt[200005][40];
vector<int>nw, ld;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%lld %lld", &n, &m);
	for(int i = 1;i <= n;i++){
		scanf("%lld", &a[i]);
		bool ch[40]{};
		long long x = a[i], sum = 0;
		while(x){
			Ecnt[i][++sum] = x % 2;
			cnt[sum] += x % 2;
			x >>= 1;
		}
		ld.push_back(i);
	}
	for(int i = 31;i >= 1;i--){
		if(cnt[i] < m)continue;
		if(ld.size() == m)break;
		nw.clear();
		for(auto x:ld){
			if(Ecnt[x][i])nw.push_back(x);
		}
		ld = nw;
	}
	long long ans = 4294967296 - 1;
	for(int i = 0;i < m;i++){
		ans &= a[ld[i]];
	}
	cout << ans;
	return 0;
} 
