#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m;
int a[500005], ans[500005];

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	for(int i = 1; i <= n; i++){
		vector<int> v; // ´æa
		for(int j = i; j <= n; j++){ 
			bool flag = 0;
			for(int k = 0; k < v.size(); k++){
				if(a[k] == a[j]){
					flag = 1;
				}
				
				if(flag){
					for(int l = k; l < v.size(); l++){
						v.erase(v.begin() + l);
					}
					break;
				}
			}
			
			v.push_back(a[j]);
		}
		
		for(int j : v){
			ans[j]++;
		}
	}
	
	for(int i = 1; i <= m; i++){
		cout << ans[i] << " ";
	}
	
	
	return 0;
}

