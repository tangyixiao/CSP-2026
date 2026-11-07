#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 5;
int a[N];
int vis[N];
int ans[N];

signed main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	if(m <= 2){
		if(a[1] == 1){
			cout << n << " ";
			int cnt = 0;
			for(int i = 1; i <= n; i++){
				if(a[i] == 2) cnt++;
			}
			cout << cnt;
			return 0;
		}
		if(a[1] == 2){
			cout << n << " ";
			int cnt = 0;
			for(int i = 1; i <= n; i++){
				if(a[i] == 1) cnt++; 
			}
			cout << cnt;
			return 0;
		}
	}
	bool has = 1;
	for(int i = 2; i <= n; i++){
		if(a[i] < a[i - 1]){
			has = 0;
			break;
		}
	}
	if(has){
		for(int i = 1; i <= n; i++){
			if(a[i] != a[i - 1]){
				cout << n - i + 1 << " ";
			}
		}
	}
	return 0;
}
/*
1 2 2 3 4 4 5 
1 
1 2
1 2
1 2 3
1 
*/