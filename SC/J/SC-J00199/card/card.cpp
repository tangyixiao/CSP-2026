#include <set>
#include <string>
#include <bits/stdc++.h>
#define ll int
#define fi first
#define se second
#define pii pair<ll , ll>
#define mk make_pair
using namespace std;
const int N = 5e5 + 10 , M = 2e5 + 10;
ll n , m , a[N] , ans[M];
ll st[N] , top;
bool in[M];
bool check1(){ // A
	for (int i = 1;i < n;i ++)
		if (a[i] > a[i + 1]) return 0;
	return 1;
}
signed main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;i ++) cin >> a[i];
	if (check1()){
		for (int i = 1;i <= n;i ++) ans[a[i]] = i;
		for (int i = 1;i <= m;i ++) cout << ans[i] << " ";
		return 0;
	}
	if (m == 2){
		for (int i = 1;i <= n;i ++){
			ans[a[n]] ++;
			if (a[i] != a[n]) ans[a[i]] ++;
		}
		cout << ans[1] << " " << ans[2] << "\n";
		return 0;
	}
	if (n <= 500){
		for (int i = 1;i <= n;i ++){
			top = 0;
			for (int j = i;j <= n;j ++){
				if (in[a[j]]) while (top && st[top] != a[j]) in[st[top]] = 0 , top --;
				else in[a[j]] = 1 , st[++ top] = a[j];
			}
			while(top) ans[st[top]] ++ , in[st[top]] = 0 , top --;
		}
		for (int i = 1;i <= m;i ++) cout << ans[i] << " ";
		return 0;
	}
	if (n <= 5000){
		
	}
	return 0;
}
/*
10 2
1 2 1 2 2 1 2 1 2 1
10 3
3 1 2 1 3 2 3 1 2 1
4 3
1 2 1 3
*/