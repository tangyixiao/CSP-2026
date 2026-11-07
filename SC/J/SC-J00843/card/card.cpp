#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m;
vector<int> a, ans;
void solve(int s){
	vector<int> c;
	for (int i = s;i <= n;i ++){
		int cd = a[i];
		bool flg = false;
		for (auto x : c) if (x == cd) flg = true;
		while (flg && c.back() != cd) c.pop_back();
		c.push_back(cd);
	}
	set<int> tmp;
	for (auto x : c) tmp.insert(x);
	for (auto x : tmp) ans[x] ++;
	return;
}
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	a.assign(n + 1, 0); ans.assign(m + 1, 0);
	for (int i = 1;i <= n;i ++) cin >> a[i];
	for (int i = 1;i <= n;i ++) solve(i);
	for (int i = 1;i <= m;i ++) cout << ans[i] << ' ';
	return 0;
} 
/*
10 3
3 1 2 1 3 2 3 1 2 1

*/
