#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	int n, m;
	int mx = 0;
	cin >> n >> m;
	vector<int> a(n);
	vector<bool> vis(n);
	vector<bool> vis1(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	int bit = 1;
	int siz, _siz;
	siz = _siz = a.size();
	long long ans = 0;
	while (mx / 2) {
		mx /= 2;
		bit *= 2;
	}
	while(bit){
		_siz = n;
		for (int j = 0; j < n; ++j){
			if(a[j] == 0){
				_siz--;
			}
			else if(a[j] % (bit * 2) / bit == 0){
				_siz--;
			}
		}
		if(_siz >= m) {
			break;
		}
		bit /= 2;
	}
	for (int i = bit; i >= 1; i /= 2){
		_siz = siz;
		for (int j = 0; j < n; ++j){
			if(a[j] % (i * 2) / i == 0 && !vis[j]){
				_siz--;
				vis[j] = 1;
			}
		}
		if(_siz < m) {
			break;
		}
		ans += i;
		siz = _siz;
	}
	cout << ans;
	freopen("and.out","w",stdout);
	return 0;
}