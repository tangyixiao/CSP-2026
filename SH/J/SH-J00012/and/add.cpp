#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+10;
int n,m;
int mx,sum;
int a[MAXN];
void solve1(){
	int ans = 0;
	for (int u=1;u<(1<<n);u++){
		int sum = -1;
		int t = u,cnt = 0;
		while(t){
			cnt += (t&1);
			t >>= 1;
		}
		if (cnt != m) continue;
		int time = n;
		for (int j=1;j<=u;j<<=1,time--){
			if (j&u){
				if (sum == -1) sum = a[time];
				else sum &= a[time];
			}
		}
		ans = max(ans,sum);
	}
	cout << ans;
} 
void solve2(){
	sort(a+1,a+1+n);
	int ans;
	for (int i=2;i<=n;i++){
		if (i == 2) ans = a[i];
		else ans &= a[i];
	}
	cout << ans;
}
int main(){
	freopen("add.in","r",stdin);
	freopen("add.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i=1;i<=n;i++) {
		cin >> a[i];
		mx = max(mx,a[i]);
		if (i == 1) sum = a[i];
		else sum &= a[i];
	}
	if (n <= 20) {
		solve1();
		return 0;	
	}
	if (n <= 2000){
		if (m == 1){
			cout << mx;
			return 0;
		}
		if (m == n){
			cout << sum;
			return 0;
		}
		if (m == 2){
			int ans = 0;
			for (int i=1;i<=n;i++){
				for (int j=1;j<=n;j++){
					if (i != j) ans = max(ans,a[i]&a[j]);
				}
			} 
			cout << ans;
			return 0;
		}
	} 
	if (m == n-1){
		solve2();
		return 0;
	}
	int ans = 0;
	int mn = 0x3f3f3f3f;
	map<int,int> cnt;
	for (int i=1;i<=n;i++){
		cnt[a[i]]++;
		mn = min(mn,a[i]);
	} 
	for (const auto& mp : cnt){
		if (mp.second >= m) ans = max(ans,mp.second);
	}
	cout << (ans == 0 ? mn : ans); 
	return 0;
} 
