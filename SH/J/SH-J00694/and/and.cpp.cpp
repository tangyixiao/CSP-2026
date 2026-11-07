#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, a[200000];
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	cerr << a[1];
	fclose(stdin);
	fclose(stdout);
}
