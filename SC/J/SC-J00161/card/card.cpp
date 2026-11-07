#include <bits/stdc++.h>
using namespace std;
int num[300001];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	string a;
	for(int i = 1; i <= n; i++) {
		char t;
		cin >> t;
		a += t;
	}
	string c = a;
	for(int t = 0; t < n; t++) {
		a = c;
		for(int i = t; i < n; i++) {
			string b = a;
			b.replace(0, i - t, "");
			if(b.find(a[i]) != string::npos){
				a.replace(i, b.find(a[i]) + 2, "");
				//cout << 1 << endl;
			}
			//cout << b << " " << a << endl;
			for(int k = 1; k <= m; k++) {
				if(a.find(to_string(k)) != string::npos){
					num[k]++;
				}
			}
		}
		
		
	}
	for(int k = 1; k <= m; k++) {
		cout << num[k] << " ";
	}
	return 0;
}