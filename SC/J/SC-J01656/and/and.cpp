
#include <bits/stdc++.h> 
using namespace std;
int a[200001];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	int c = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	if (m == 2){
		for (int i = 0; i < n; i++){
			for (int j = i + 1; j < n; j++){
				c = max(c, a[i] & a[j]);
			}
		}
		cout << c << endl;
		return 0;
	}
	do{
		int x = a[0];
		for (int i = 1; i < m; i++){
			x = x & a[i];
		}
		c = max(c, x);
	}while(next_permutation(a, a + n));
	cout << c << endl;
	return 0;
}
