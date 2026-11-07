#include <iostream>
#include <vector>
#include <set>
using namespace std;

int n, m, a[500005], ans[300005];
vector<int> v;
set<int> s;

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++){
		v.clear();
		s.clear();
		for (int j = i; j <= n; j++){
			if (s.count(a[j])){
				for (int k = v.size() - 1; k >= 1; k--){
					if (v[k] == a[j]){
						break;
					}
					s.erase(v[k]);
					v.pop_back();
				}
			}
			else{
				s.insert(a[j]);
				v.push_back(a[j]);
			}
		}
		for (auto x : v){
			ans[x]++;
		}
	}
	for (int i = 1; i <= m; i++){
		cout << ans[i] << " ";
	}
	return 0;
}