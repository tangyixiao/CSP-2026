#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
LL n, m;
LL a[200010];
LL dt[200010];
LL f(LL dt[], LL nc, LL fc){
	if(nc == fc) {
		for(int i=1;i<=n;i++){
			bool d = 1;
			for(int j=1;j<=nc-1;j++){
				if(a[i] == dt[j]) d =0;
			}
			if(d){
				return a[i];
			}
		}
	}else{
		LL ld[200010] = {};
		LL na = 1;
		for(int i=1;i<=n;i++){
			bool d = 1;
			for(int j=1;i<=nc-1;i++){
				if(a[i] == dt[j]) d =0;
			}
			if(d){
				ld[na] = a[i];
				na ++;
			}
		}
		LL j = dt[1];
		for(int i=1;i<na;i++){
			dt[nc] = ld[i];
			for(int k=2;k <=nc-1;k++){
				j = j && dt[k];
			}
			j = max(j&&f(dt, nc+1, fc), j&&dt[nc]);
		}
		return j;
	}
	
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i=1;i <= n;i++){
		cin >>a[i];
	}
	cout << f(dt, 1, m);
	return 0;
}
