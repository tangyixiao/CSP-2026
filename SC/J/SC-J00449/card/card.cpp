#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	vector<int> ans(m + 1);
	vector<int> t(n);
	for (int i = 0; i < n; ++i){
		for (int j = i; j < n; ++j) {
			t[j] = a[j];
		}
		for (int j = i; j < n; ++j) {
			for (int k = i; k < j; ++k) {
				if (t[k] == t[j]){
					for (int l = k; l < j; ++l) {
						t[l] = 0;
					}
					break ;
				}
			}
		}
		for (int j = i; j < n; ++j) {
			ans[t[j]]++;
		}
	}
	for (int i = 1; i <= m; ++i) {
		cout << ans[i] << " ";
	}
	cout << "\n";
	freopen("card.out","w",stdout);
	return 0;
}