#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	long long aa;
	vector<long long> a;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> aa;
		a.push_back(aa);
	}
	sort(a.begin(),a.end());
	aa = a[a.size() - 1];
	for(int i = 1;i < m;i++)
	{
		aa = (aa & a[a.size() - 1 - i]);
	}
	cout << aa;
	return 0;
}
