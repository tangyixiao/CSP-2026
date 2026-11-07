#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500001];
vector<int> v;
int ans[300001];
bool c[300001];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int k = 1;k <= n;k++){
		v.clear();
		for(int i = 1;i <= m;i++){
			c[i] = 0;
		}
		for(int i = k;i <= n;i++){
			if(c[a[i]] == 1){
				while(v[v.size() - 1] != a[i]){
					c[v[v.size() - 1]] = 0;
					v.pop_back();
				}
				v.pop_back();
			}
			v.push_back(a[i]);
			c[a[i]] = 1;
		}
		for(int j = 0;j < v.size();j++){
			ans[v[j]]++;
		}
	}
	cout << endl;
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
