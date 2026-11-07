#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
vector<int> a;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll ma = -1e5-5;
	cin >> n >> m;
	for(ll i = 1;i <= n;i++){
		ll x;
		cin >> x;
		a.push_back(x);
	}
	for(ll i = 1;i <= n;i++){
		for(ll j = i + 1;j <= n;j++){
			ll cnt = a[i]&a[j];
			ma = max(ma,cnt);
		}
	}
	int num = a[1];
	if(n == m){
		for(int i = 2;i <= n;i++){
			num = num&a[i];
		}
		cout << num;
		return 0;
	}
	cout << ma;
	return 0;
}