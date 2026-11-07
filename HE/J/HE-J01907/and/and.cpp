#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int d (vector<int> a, int &m, int &o, bool q, vector<int> &b){
	if (!m){
		int v = b[0];
		for (int i = 1; i < b.size(); i++){
			v = v & b[i];
		}
		cout << v ;
	}
	if (o > a.size()) return 0;
	if (q){
		m--;
		b.push_back(a[o]);
	}
	o++;
	return max(d(a, m, o, 0, b), d(a, m, o, 1, b));
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> b;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int o = 0;
	int l = max(d(a, m, o, 0, b), d(a, m, o, 1, b));
	return 0;
}
