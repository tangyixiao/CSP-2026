#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 7;
const int M = 3e5 + 7;
int a[N], cnt[M];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	memset(cnt, 0, sizeof(cnt));
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	vector<int> v;
	for(int i = 1; i <= n; i++) {
		v.clear();
		for(int j = i; j <= n; j++) {
			for(int k = 0; k < v.size(); k++) {
				if(v[k] == a[j]) {
					vector<int> vec;
					for(int x = 0; x < k; x++) {
						vec.push_back(v[x]);
					}
					v.clear();
					v = vec;
					break;
				}
			}
			v.push_back(a[j]);
		}
		for(int j : v) {
			cnt[j]++;
		}
	}
	for(int i = 1; i <= m; i++) {
		cout << cnt[i] << " ";
	}
	return 0; 
}
