#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int a[25];
	int n, m, mx;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n, greater<int>());
	mx = a[0];
	for(int i = 1; i < m; i++)
		mx &= a[i];
	cout << mx;
	fclose(stdin);
	fclose(stdout);
	return 0;
}