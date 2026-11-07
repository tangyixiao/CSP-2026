#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	vector <int> all(n + 1);
	for (int i = 0;i < n;i ++){
		cin >> all[i];
	} 
	
	if (n == m) {
		int ad = all[0];
		for (int i = 1;i < n;i ++){
			ad = ad&all[i];
		}
		cout << ad;
	}
	else if (m == 1) {
		int mx = -1;
		for (int i = 0;i < n;i ++){
			mx = max(mx,all[i]);
		} 
		cout << mx; 
	}
	else if (m == 2) {
		int mx = -1;
		for (int i = 0;i < n;i ++){
			for (int j = i + 1;j < n;j ++){
				mx = max(mx,all[i]&all[j]);
			}
		}
		cout << mx;
	} 
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
