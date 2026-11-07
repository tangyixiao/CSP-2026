#include<bits/stdc++.h>
using namespace std;
unsigned long long n, m, e, x;
vector<char> a;
int main(){
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while(n--){
		long long w;
		char q;
		cin >> w >> q;
		m += w;
		while(w--){
			a.push_back(q);
		}
	}
	e = m / 2;
	for (int i = 0;i < e;i++){
		if (a[i] != a[m - i - 1]){
			x++;
		}
	}
	cout << x;
	return 0;
}