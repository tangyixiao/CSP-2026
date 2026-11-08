#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e7+87;
int n, m, a[N], mx;

signed main(){
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 0; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	cout << a[m];
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}



