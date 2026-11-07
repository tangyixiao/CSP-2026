#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5005;
int n , m , a[N] , b[N] , v[N] , p[N];
signed main(){
	ios::sync_with_stdio(0) , cin.tie(0);
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)cin >> a[i];
	for(int i = 1; i <= n; i ++){
		memset(v , 0 , sizeof v);
		memset(p , 0 , sizeof p);
		vector<int> g;
		for(int j = i; j <= n; j ++){
			g.push_back(a[j]);
			if(!v[a[j]])v[a[j]] = 1 , p[a[j]] = j;
			else{
				for(int k = p[a[j]] - i; k < j - i; k ++){
					v[g[k]] = p[g[k]] = g[k] = 0;
				}v[a[j]] = 1 , p[a[j]] = j;
			}
		}int l = g.size();
		for(int j = 0; j < l; j ++)b[g[j]] ++;
	}for(int i = 1; i <= m; i ++)cout << b[i] << " ";
	return 0;
}