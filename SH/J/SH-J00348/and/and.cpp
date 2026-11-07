#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200000 + 50];
int n, m;
bool check(int x){
	int now = a[1], cnt = 1;
	if(now < x){
		return false;
	}
	for(int i = 2; i <= n; i++){
		if(now & a[i] < x){
			continue;
		}
		now &= a[i];
		cnt++;
	}
	return cnt >= m;
}
bool cmp(int c, int d){
	return c > d;
}
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "r", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	int l = 0, r = a[1], ans;
	while(l <= r){
		int mid = (l + r) / 2;
		if(check(mid)){
			ans = mid;
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	cout << ans;
	return 0;
}
