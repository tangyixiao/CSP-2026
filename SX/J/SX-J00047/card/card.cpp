#include<bits/stdc++.h>
#define int long long
using namespace std;
int h[500010];
signed main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	if(m == 1){
		cout << n;
		return 0;
	}
	for(int i = 1; i <= n; i ++){
		cin >> h[i];
	}
	map<int, int> g;
	for(int i = 1; i <= n; i ++){
		int sum = 0;
		vector<int> s;
		for(int j = i; j <= n; j ++){
			if(j == i){
				s.push_back(h[j]);
			}else{
				if(s[s.size() - 1] != h[j]){
					s.push_back(h[j]);
				}
			}
		}
		for(auto j : s){
			g[j] ++;
		}
	}
	for(int i = 1; i <= m; i ++){
		cout << g[i] << ' ';
	}
	return 0;
}