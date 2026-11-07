#include <bits/stdc++.h>

using namespace std;

long long ans = 0;

int main() {
	
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	
	int n;
	cin >> n;
	vector<int> v(n+1,0);
	vector<char> c(n+1,' ');
	for(int i = 1;i <= n;i++) {
		cin >> v[i] >> c[i];
	}
	int r = 1,l = n;
	int R = v[1],L = v[n];
	while(r <= l) {
		int com = min(R,L);
		if(c[r] != c[l]) {
			ans += com;
		}
		R -= com,L -= com;
		if(R == 0) {
			r++;
			R = v[r];
		}
		if(L == 0) {
			l--;
			L = v[l];
		}
	}
	cout << ans;
	return 0;
}

