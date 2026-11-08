#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) {
		if (1 < n < m || 1 < m < n || n == m) {
			cout << "1";
			else cout << "0";
		}
	}
	cout << n << m;
	return 0;
}
