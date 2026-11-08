#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int n, m;
int a[200005];
long long ans = -1e9;
vector<int> p;
bool ma[200005];
void dfs(int x){
	if(x == n+1){
		long long cnt = p[0];
		for(int i=1;i<(int)p.size();i++) cnt = (cnt&p[i]);
		ans = max(cnt, ans);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!ma[i]){
			ma[i] = true;
			p.push_back(a[i]);
			dfs(x+1);
			p.pop_back();
			ma[i] = false;
		}
	}
}
bool f(int x){
	int k = 1;
	for(int i=1;i<=30;i++){
		if(k == x) return true;
		k*=2;
	}
	return false;
}
bool A(){
	for(int i=1;i<=n;i++){
		if(!f(a[i]+1)) return false;
	}
	return true;
}
bool B(){
	if(!f(n)) return false;
	for(int i=1;i<=n;i++){
		if(a[i]!=i-1) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	if(n<=20){
		dfs(0);
		cout << ans;
		return 0;
	}
	if(n<=2000){
		if(m == 1){
			int k = -1e9;
			for(int i=1;i<=n;i++) k = max(k, a[i]);
			cout << k;
			return 0;
		}
		if(m == n){
			long long k = a[1];
			for(int i=2;i<=n;i++) k = (k&a[i]);
			cout << k;
			return 0;
		}
		if(m == 2){
			long long k = -1e9;
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(i!=j) k = max(k, (1ll*a[i]&a[j]));
				}
			}
			return 0;
		}
	}
	if(m == n-1){
		long long k1 = a[2], k2 = a[1];
		for(int i=3;i<=n;i++) k1 = (k1&a[i]);
		for(int i=1;i<n;i++) k2 = (k2&a[i]);
		cout << max(k1, k2);
		return 0;
	}
	if(A()){
		sort(a+1, a+1+n, greater<>());
		long long k = a[1];
		for(int i=2;i<=n;i++) k = (k&a[i]);
		cout << k;
		return 0;
	}
	if(B()){
		long long k = a[n];
		for(int i=n-1;i>=n-m+1;i--) k = (k&a[i]);
		cout << k;
		return 0;
	}
	return 0;
}
