#include <bits/stdc++.h>
using namespace std;

int a[200050];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	int ad=2147483647;
	int cnt=0;
	for (int i=n;i>=1;i--)
	{
		if (cnt==m) break;
		if ((a[i]&a[i]-1)==0)
		{
			continue;
		}
		ad=ad&a[i];
		cnt++;
	}
	cout << ad;
	return 0;
} 
