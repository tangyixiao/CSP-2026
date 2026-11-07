#include<bits/stdc++.h>
using namespace std;
const long long maxn = 1e8 + 10;
int a[maxn];
bool cmp(int x, int y){
	return x > y;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, x = 0, mx, mx1 = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1, cmp);
	mx = a[1];
	for(int i = 1; i <= m; i++) mx &= a[i];
	for(int i = 1; i <= n; i++){
		if(x == m) break;
		if(a[i] % 2 != 0){
			if(mx1 == 0) mx1 = a[i];
			else mx1 &= a[i];
			x++;
		}
	}
	cout << max(mx, mx1);
	fclose(stdin);
	fclose(stdout);
	return 0;
}