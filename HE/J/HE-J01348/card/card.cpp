#include<bits/stdc++.h>
using namespace std;
int n, m;

const int N = 5e5 + 5;
int a[N];
int main(){
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	map<int, int> mp;
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			mp[a[j]]++;
		}
	}
	
	for(int i = 1; i <= m; i++){
		cout << mp[i] << ' ';
	}
	return 0;
}
