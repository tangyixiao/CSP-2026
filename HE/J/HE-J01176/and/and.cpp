#include <bits/stdc++.h>
using namespace std;
int n,m,a[200100],answ;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	answ=a[1];
	for (int i=2;i<=m;i++)
	{
		answ=answ&a[i];
	}
	cout << answ;
	return 0;
}
