#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, a[200001];
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	reverse(a + 1, a + 1 + n);
	int x = a[1];
	for(int i = 2 ; i <= m ; i++){
		x =(x&a[i]); 
	}
	cout << x;
	fclose(stdin);
	fclose(stdout);
	return 0; 
}
