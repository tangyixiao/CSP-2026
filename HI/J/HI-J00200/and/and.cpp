#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin >> n >> m;
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	for (int i=0;i<n;i++)
	{
		int min = a[i];
		cout << a[i]; break;
	}
	return 0;
}

