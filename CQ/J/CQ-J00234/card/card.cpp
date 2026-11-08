#include<bits/stdc++.h>

using namespace std;
#define ll long long
int n,m;
int a[500050];
int db[300050];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n ;i ++) {
		cin >> a[i];
	}
	/*for(int k = 1;k <= n; k++) {
		
		int vis[300050];
		vector<int> v;
		int tot = 0;
		for(int i = 1;i <= m; i++) vis[i] = 0;
		for(int i = k;i <= n; i++) {
			v.push_back(a[i]);
			tot++; 
			vis[a[i]]++;
			for(int j = tot - 1;j >= 0;j--) {
				if(v[j] == v[tot - 1]) {
					vis[v[j]]--;
					vis[v[j + 1]]--;
					v[j] = 0,v[j + 1] = 0;
				} 
			}
		}
		for(int i = 1;i <= m; i++) db[i] += vis[i];
	}
	*/
	for(int i = 1;i <= m; i++) cout << db[i] << " ";
	return 0;
} 
