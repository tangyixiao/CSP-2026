#include<bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define pii pair<int, int>
using namespace std;
const int N = 5e5 + 5;
int n, m, a[N];
int cnt[N];
int last[N], nxt[N];
int main () {
//	system("fc card6.ans my.out");
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	fastio;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		if(last[a[i]]) nxt[last[a[i]]] = i;
		last[a[i]] = i;
	}
	for(int i = 1; i <= n; i++) {
		if(nxt[i] == 0) nxt[i] = i + 1;
	}
//	for(int i = 1; i <= n; i++) cout << nxt[i] << " ";
	//cout << endl;
//	cout << nxt[3] << endl;
//	nxt[0] = 1;
	for(int i = 1; i <= n; i++) {
		int id = i;
		while(id <= n) {
			if(nxt[id] == id + 1 && a[nxt[id]] != a[id]) cnt[a[id]]++;
			//cout << a[id] << " ";
			id = nxt[id];
		}
	//	cout << endl;
	}
	for(int i = 1; i < m; i++) cout << cnt[i] << " ";
	cout << cnt[m] << endl;
	return 0;
}

