#include<bits/stdc++.h>
using namespace std;
const int MAXI = 1000000;
int w[MAXI];
int a[MAXI];
int t[MAXI];
int main(){
	freopen("subway.in", "r", stdin);
	freopen("subway.out", "w", stdout);
	int  c, n, m, d, q;
	cin >> c >> n >> m >> d >> q;
	for(int i = 1;i <= m;i++){
		cin >> w[i];
	}
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> t[i];
	}
	for(int i = 1;i <= q;i++){
		unsigned int m,n;
		cout << m+n << endl;
	}
	return 0;
}
