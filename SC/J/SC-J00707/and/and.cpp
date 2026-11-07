#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int n , m , x , a[N][35] , p[35] , ans = 0;
vector<int> v;
signed main(){
	ios::sync_with_stdio(0) , cin.tie(0);
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m , p[0] = 1;
	for(int i = 1; i < 35; i ++)p[i] = p[i - 1] * 2;
	for(int i = 1; i <= n; i ++){
		cin >> x;int k = 0;
		while(x > 0){
			a[i][++ k] = x % 2 , x /= 2;
		}v.push_back(i);
	}for(int j = 32; j > 0; j --){
		int l = v.size();vector<int> g;
		for(int i = 0; i < l; i ++){
			if(v[i] == -1)continue;
			if(a[v[i]][j])g.push_back(v[i]);
		}int r = g.size();
		if(r >= m){
			for(int i = 0; i < l; i ++){
				if(v[i] == -1)continue;
				if(!a[v[i]][j])v[i] = -1;
			}ans += p[j];
		}
	}cout << ans / 2;return 0;
}