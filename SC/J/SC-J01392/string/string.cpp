#include<bits/stdc++.h>
#define int long long
using namespace std;
const int M = 2e5 + 2;
int a[M], cnt = 0;
char cl[M];
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(0) -> sync_with_stdio(0);
	int n;
	cin >> n;
	char lst = '#';
	for(int i = 0; i < n; i ++){
		int l;
		char c;
		cin >> l >> c;
		if(lst == c) a[cnt] += l;
		else {
			a[++ cnt] = l;
			cl[cnt] = c;
		}
		lst = c;
	}
	int ans = 0;
	int l = 1, r = cnt;
	while(l <= r){
		int d = min(a[l], a[r]);
		if(cl[l] != cl[r]) ans += d;
		a[l] -= d;
		a[r] -= d;
		if(a[l] <= 0) l ++;
		if(a[r] <= 0) r --;
	}
	cout << ans;
	
}