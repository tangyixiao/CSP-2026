#include <bits/stdc++.h>
using namespace std;
 
int a[10000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i ++) cin >> a[i];
	sort(a, a + n);
	int an = a[n-m] & a[n-m+1];
	for(int i = n-m+1; i < n-1; i ++){
		an = an & a[i];
	}
	cout << an;
	return 0;
}
