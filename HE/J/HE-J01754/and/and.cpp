#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;
int n,m,a[200005],b[200005];
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n+1);
	int c = a[n],maxn = -1;
	for (int i = 1;i <= n;i++) cout << a[i] << " ";
	b[1] = c;
	for (int i = 2;i <= m;i++)
	{
		b[i] = (b[i-1] & a[m-i]);
		maxn = max(b[i],b[i-1]);
	}
	cout << maxn;
	return 0;
}
