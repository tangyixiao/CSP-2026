#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
ll abc(vector<long long> v, ll a, int m){
	if(m == 0) return a;
	ll ma = a & v[0];
	for(int i = 0; i < v.size(); i++){
		ma = max(ma, a & v[i]);
	}
	abc(v, ma, m - 1);
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<long long> v(n);
	cin >> v[0];
	ll a = v[0];
	for(int i = 1; i < n; i++){
		cin >> v[i];
		a = a & v[i];
	}
	if(m == n){
		cout << a << endl;
		return 0;
	}
	else if(m == 1){
		sort(v.begin(), v.end());
		cout << v[n - 1] << endl;
		return 0;
	}
	else if(m == 2){
		ll ans = 0;
		for(int i = 0; i < n; i++){
			for(int k = 0; k < n; k++){
				if(i == k) continue;
				ans = max(v[i] & v[k], ans);
			}
		}
		cout << ans << endl;
		return 0;
	}
	else if(m == n - 1){
		vector<ll> v1;
		for(int i = 0; i < v.size(); i++){
			v1.push_back(a & v[i]);
		}
		sort(v1.begin(), v1.end());
		cout << v1[v.size() - 1] << endl;
		return 0;
	}
	else{
		cout << abc(v, a, n - m);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
