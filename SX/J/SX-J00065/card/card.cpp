#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define pii pair<int, int>
#define ull unsigned long long
#define ve vector<int, int>
using namespace std;
const int N = 1e8 + 10;
const int INF = 0x3f3f3f3f;
//const int MOD = ;
int a[N];
int st[N];
int n,m;
void solve() {
	cin >> n >> m;
	cin>>a[1];
	st[a[1]]++;
	int ok=0;
	for (int i = 2; i <= n; i ++) {
		cin>>a[i];
		st[a[i]]++;
		if (a[i-1]>a[i]) ok=1;
	}

	if (ok==0){
		cout<<st[1]<<" ";
		for(int i = 2;i<=m;i++){
			st[i]+=st[i-1];
			cout<<st[i]<<" ";
		}
	}
}
signed main() {
		freopen("card.in", "r", stdin);
		freopen("card.out", "w", stdout);
	int t=1;
	while (t --) {
		solve();
	}
	return 0;
}