#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 2e5+100;
ll a[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	/*
	for(int i = n; i>=1; i--){
		cout << a[i] << " ";
	}
	cout << endl;
	*/
	ll ans = a[n];
	ll j = n-1;
	for(int i = 1; i < m; i++){
		ans = (ans&a[j]);
		j--;
	}
	cout << ans;
	return 0;
}
