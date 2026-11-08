#include <bits/stdc++.h>
using namespace std;
int m, n, a[1000005], b[1000005], maxn, c, d;
int main(){
	freopen("and1.in","r",stdin);
	freopen("and1.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	maxn = 0;
	for(int j = 1;j <= m;j++)
	{
		for(int i = 1;i <= n;i++)
		{
			if(a[i] > maxn && i != c)
			{
				maxn = a[i];
				c = i;
			}
		}
		b[j] = maxn;
	}
	cout << b[1]and b[2];
	return 0;
}
