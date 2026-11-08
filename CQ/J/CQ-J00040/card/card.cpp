#include <bits/stdc++.h>
using namespace std;
const int MAXN = 500000;
int arr[MAXN+5], cnt[MAXN+5];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
		if(!cnt[arr[i]]) cnt[arr[i]] = i;
	}
	for(int i = 1; i <= m; i++){
		cout << cnt[i] << ' ';
	}
	return 0;
} 
