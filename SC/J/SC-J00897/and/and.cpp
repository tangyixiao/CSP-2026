#include<bits/stdc++.h>
#define ll unsigned long long

using namespace std;

const int N = 2e5+10;

int n,m;
ll a[N],ans1=1,ans2,ans3,ans4;

void dfs(int step,int tot,ll ans){
	if(tot == m){
		ans4 = max(ans4,ans);
		return;
	}
	if(step == n+1) return;
	dfs(step+1,tot+1,ans&a[step]);
	dfs(step+1,tot,ans);
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(i == 1) ans1 = a[i];
		ans1 = (a[i] & ans1);
		ans2 = max(ans2,a[i]);
	}
	if(m == n){
		cout << ans1;
		return 0;
	}
	if(m == 1){
		cout << ans2;
		return 0;
	}
	if(m == 2){
		for(int i = 1;i <= n;i++)
			for(int j = i+1;j <= n;j++){
				ll cnt = a[i] & a[j];
				ans3 = max(cnt,ans3);
			}
		cout << ans3;
		return 0;
	}
	dfs(1,0,2097151);
	cout << ans4;
	return 0;
}