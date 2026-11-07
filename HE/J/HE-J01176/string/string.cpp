#include <bits/stdc++.h>
using namespace std;
int n;
long long daan,a[200100],xs,answ;
char ss[200100];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i] >> ss[i];
	}
	for (int i=1;i<=n;i++)
	{
		if (ss[i]!=ss[n-i+1])
		{
			answ+=a[i];
		}
		xs+=a[i];
	}
	answ=min(answ,xs/2);
	cout << answ;
	return 0;
}
