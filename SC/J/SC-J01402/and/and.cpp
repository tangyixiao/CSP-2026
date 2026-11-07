#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int n, m;
int a[N];
int maxn = -1;
int v[N];
void f(int x, int y){
	if(x >= m) return;
	for(int i = 1; i < n; i++){
		if(v[i] == 1) continue;
		v[i] = 1;
		int b;
		if((y & a[i]) > maxn){
			maxn = (y & a[i]);
			b = y;
		}
		maxn = max(maxn, y & a[i]);
		f(x + 1, y & a[i]);
		v[i] = 0;
		y = b;
	}
}
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	if(m == 1){
		for(int i = 0; i < n; i++){
			maxn = max(maxn, a[i]);
		}
		cout << maxn;
		return 0;
	}
	return 0;
}