#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int m, n, a[200005] = {};
long long andop__ddsafjjajhf(){
	long long ans = a[1];
	for(int i = 2; i <= m; i++){
		ans = ans & a[i];
	}
	return ans;
}
bool cmp(int a, int b) { return a > b; }
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	cout << andop__ddsafjjajhf();
	return 0;
}