#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[100005],b = 0;
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	cout << a[n-1];
	freclose(stdin);
	freclose(stdout);
	return 0;
}
