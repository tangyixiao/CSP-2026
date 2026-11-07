#include <bits/stdc++.h>
using namespace std;

vector <int> a;
int ans[3000010];
int n, m;

void slove(int l) {
	auto b = a;
	for (int z = l; z <= n; z ++) {
		int i = a[z];
		bool flag = false;
		for (int j = 0; j < b.size(); j ++) {
			if (b[j] == i) {
				for (int k = j; k < b.size(); k ++) {
					b.erase(b.begin() + j);
				}
				b.push_back(i);
				
				flag = true;
				break;
			}
		}
		
		if (!flag) {
			b.push_back(i);
		}
	}
	set <int> st;
	for (auto i : b) {
		st.insert(i);
	}
	for (auto i : st) {
		ans[i] ++;
	}
	return ;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; i ++) {
		int t;
		cin >> t;
		a.push_back(t);
	}
	
	for (int i = 1; i <= n; i ++) slove(i);
	
	for (int i = 1; i <= m; i ++) cout << 0 << " ";
	return 0;
} 
