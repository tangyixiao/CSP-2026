#include<bits/stdc++.h>
#define int long long
using namespace std;

int a[500005];
vector <int> s;
bool vis[500005];
int b[500005];
signed main(){
	
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n , m;
	cin >> n >> m;
	
	for (int i = 1 ; i <= n ; i ++) {
		cin >> a[i];
	}
	
	for (int o = 1 ; o <= n ; o ++) {
		int w = 0;
		for (int i = o ; i <= n ; i ++) {
			bool p = 0;
			for (int j = 0 ; j < s.size() ; j ++) {
				if (vis[j]) continue;
				if (s[j] == a[i]) {
					p = 1;
					w = j;
					break;
				}
			}
			if (p) {
				for (int k = w ; k < s.size() ; k ++) {
					vis[k] = 1;
				}
				s.push_back(a[i]);
			}
			else {
				s.push_back(a[i]);
			}
		}
			
		for (int i = 0 ; i < s.size() ; i ++) {
			if(vis[i] == 0) b[s[i]] ++;
		//	if(vis[i] == 0)cout << s[i] << ' ';
		}
		//cout << '\n';
		
		memset (vis , 0 , sizeof vis);
		s.clear();
	}
	
	for (int i = 1 ; i <= m ; i ++) {
		cout << b[i] << ' ';
	}
	return 0;
} 