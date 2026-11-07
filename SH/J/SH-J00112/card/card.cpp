#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+9;
int n,m;
int a[N];
int lst[N];
int lft[N];
int ans[N];
int cnt[N];
bool ok[N];
void solveBF(){
	for(int i = 1;i <= n;i++){
		if(ok[a[i]])continue;
		int r=i; 
		ok[a[i]] = 1;
		while(r <= n){
			ans[a[r]]+=cnt[a[i]];
			r = lst[a[r]]+1;
		}
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << ' ';
	}
}
void solve(){
	lft[1] = 0;
	for(int i = 1;i <= n;i++){
		lft[i] = max(lft[i-1],lst[a[i]]);
	}
	for(int i = 1;i <= m;i++){
		if(lft[lst[i]] <= lst[i])ans[i] = lst[i];
		else ans[i] = cnt[i];
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << ' ';
	}	
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		lst[a[i]] = i;
		cnt[a[i]]++;
	}
	solveBF();
//	else{
//		solve();
//	}
	return 0;
}
