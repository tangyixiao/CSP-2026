#include<bits/stdc++.h>
#define int long long
using namespace std;
int h[200010];
signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	if(m == n){
		int sum = 0;
		for(int i = 1; i < n; i ++){
			if(i == 1){
				int a, b;
				cin >> a >> b;
				sum = a and b;
			}else{
				int a;
				cin >> a;
				sum = sum and a;
			}
		}
		cout << sum;
		return 0;
	}
	for(int i = 1; i <= n; i ++){
		cin >> h[i];
	}
	if(m == 1){
		sort(h + 1, h + 1 + n);
		cout << h[n];
		return 0;
	}
	if(m == 2){
		int ma = 0;
		for(int i = 1; i <= n; i ++){
			for(int j = i + 1; j <= n; j ++){
				ma = max(ma, h[i] & h[j]);
			}
		}
		cout << ma;
		return 0;
 	}
	return 0;
}