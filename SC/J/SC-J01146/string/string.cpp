#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N = 2e5 + 5;
long long a[N];
char c[N];
int n;
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	long long ans = 0;
	long long i = 0, j = 0, i1 = 0, j1 = n + 1;
	char ci, cj;
	while(i1 + 1 < j1){
		if(i <= j){
			int ls = i;
			i += a[++i1];
			if(c[i1] != cj) ans += min(i, j) - ls;
			ci = c[i1];
		} 
		else {
			int ls = j;
			j += a[--j1];
			if(c[j1] != ci) ans += min(i, j) - ls;
			cj = c[j1];
		}
		//cout << ans << endl;
	}
	cout << ans;
	return 0;
} 