#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int a[99999] = {};
	int c[m + 1] = {};
	int d[m + 1] = {};
	for (int i = 0;i < n;i++) {
		cin >> a[i];
		if (d[a[i]] != 0) d[a[i]] = n - i;
	}
	if (n <= 500){
		for (int i = 1;i <= n;i++){
			int b[99999] = {};
			int f[m + 1] = {};
			int p = i - 1,r = 1;
			for (int j = p;j < n;j++){
				if (f[a[j]] == 0) b[r] = a[j],f[a[j]] = r,r++;
				else{
					if (f[a[j]] >= r) f[a[j]] = 0,b[r] = a[j],f[a[j]] = r,r++;
					else r = f[a[j]] + 1;
				}
			}
			for (int i = 1;i < r;i++) c[b[i]]++;
		}
		for (int i = 1;i <= m;i++) cout << c[i] << ' ';
	}
	else{
		for (int i = 1;i <= m;i++) cout << d[i] << ' ';
	}
	return 0;
}
