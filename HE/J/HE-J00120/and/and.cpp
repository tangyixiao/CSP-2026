#include<bits/stdc++.h>
using namespace std;
const int N = 201000, M = 30;
int n, m, a[N];
int main(){
	freopen("and.in", "r", stdin);
	freopen("add.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	int ans = 0;
	for(int j = M - 1; ~j; j--){
		int val = 0;
		for(int i = 1; i <= n; i++)
			if((a[i] & ((1 << j) | ans)) == ((1 << j) | ans))
				++val;
		if(val >= m)
			ans |= (1 << j);
	}
	cout << ans << '\n';
	return 0;
}
