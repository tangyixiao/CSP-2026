#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5;

int n, m, a[N], b[N], s[N], f = 1;

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ ){
		cin >> a[i];
		if (a[i] < a[i - 1]) f = 0;
		b[a[i]] = i;
	}
	
	if (f == 1){
		for (int i = 1; i <= n; i ++ ){
			s[a[i]] = i;
		}
		for (int i = 1; i <= m; i ++ ) cout << s[i] << " ";
		return 0;
	}
	
	for (int i = 1; i <= n; i ++ ){
		for (int j = i; j <= n; j ++ ){
			s[a[j]] ++ ;
			j = b[a[j]];
		}
	}
	
	for (int i = 1; i <= m; i ++ ){
		cout << s[i] << " ";
	}
	
	return 0;
}