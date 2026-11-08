#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long s;
long long a[100005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;++i) {
		cin >> a[i];
	}
	if(m == 1) {
		for(int i = 1;i <= n;++i) {
			if(s < a[i]) {
				s = a[i];
			}
		}
	}
	if(m == 3) {
		for(int i = 1;i < n - 1;++i) {
			for(int j = i + 1;j < n;++j) {
				for(int k = j + 1;k <= n;++k) {
					int x = a[i] & a[j] & a[k];
					if(x > s) {
						s = x;
					}
				}
			}
		}
	}
	if(m == 4) {
		for(int i = 1;i < n - 2;++i) {
			for(int j = i + 1;j < n - 1;++j) {
				for(int k = j + 1;k < n;++k) {
					for(int l = k + 1;l <= n;++l) {
						int x = a[i] & a[j] & a[k] & a[l];
						if(x > s) {
							s = x;
						}
					}
				}
			}
		}
	}
	if(m == 5) {
		for(int i = 1;i < n - 3;++i) {
			for(int j = i + 1;j < n - 2;++j) {
				for(int k = j + 1;k < n - 1;++k) {
					for(int l = k + 1;l < n;++l) {
						for(int o = l + 1;o <= n;++o) {
						int x = a[i] & a[j] & a[k] & a[l] & a[o];
						if(x > s) {
							s = x;
						}	
						}
					}
				}
			}
		}
	}
	cout << s;
	return 0;
}
