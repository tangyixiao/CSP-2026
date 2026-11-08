#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],l;
int b;
string s;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++)
	{
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		while(a[i] != 0)
		{
			b = a[i]%2;
			s += b +'0';
			a[i]/=2;
	    }
	    s += ' ';
	}
	cout <<  max(a[2],a[3]);
	return 0;
}
