#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const ll MAXN = 5e5 + 7;
const ll MAXM = 3e5 + 7;
int n, m, l;
int arr[MAXN];
int ans[MAXM];
int k[MAXM];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
		k[arr[i]] = i;
	}
	for(int i = 1; i <= n; i++){
		l = i;
		do{
			++ ans[arr[l]];
			l = k[arr[l]] + 1;
		}while(l != n + 1);
	}
	for(int i = 1; i <= m; i++) cout << ans[i] << ' ';
	return 0;
} 
