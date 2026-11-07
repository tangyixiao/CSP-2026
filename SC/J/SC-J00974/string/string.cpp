#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, m, c[201000];
	int count = 0, cont = 0;
	char a[201000], b;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> m >> b;
		a[i] = b;
		c[i] = m;
	}
	for (int i = 0; i < n; i++){
		if (a[i] != a[i - 1]){
			count = count + c[i];
			a[i] = a[i - 1];
		}
	}
	for (int i = n; i > 0; i--){
		if (a[i] != a[i + 1]){
			cont = cont + c[i];
			a[i] = a[i - 1];
		}
	}
	cout << count - cont;
	return 0;
}