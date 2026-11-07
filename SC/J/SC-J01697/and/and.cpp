#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int n, m, a, ans, s[35], x[N], sz, A[N];
bool st[N], vis[N];
vector<int> p[35];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a;
		A[i] = a;
		st[i] = 1;
		for(int j = 30; j >= 0; j--){
			int nw = pow(2, j);
			if(a >= nw){
				s[j]++;
				p[j].push_back(i);
				a -= nw;
			}
		}
	}
	sz = n;
	for(int i = 30; i >= 0; i--){
		if(s[i] >= m){
			for(int i = 1; i <= n; i++) vis[i] = 0;
			int sum = 0;
			for(int u:p[i]){
				if(st[u] == 1){
					sum++;
					vis[u] = 1;
				}
			}
			if(sum >= m){
				ans += pow(2, i);
				if(s[i] < sz){
					for(int j = 1; j <= n; j++) st[j] = vis[j];
				}
			}
		}
	}
	cout << ans;
	return 0;
}