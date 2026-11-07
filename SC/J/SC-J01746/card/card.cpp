#include<bits/stdc++.h>
#define int long long
#define ios ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

const int N = 2e5 + 5;


int n, m;
int a[N], vis[N];


signed main(){
	ios;
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
		vis[a[i]] = 1;
	}
	for(int i = 1;i <= m;i ++){
		if(vis[i] == 1)cout << n <<' ';
	}
	return 0;
}