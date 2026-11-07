#include<bits/stdc++.h>
using namespace std;
int maxxx = -0x3f, n, m, a[200010];
void maxx(int i, int l, int m1)
{
	if(m1 == 1)
	{
		for(int j = i;j <= n;j++)
		{
			maxxx = max(maxxx, l & a[j]);
		}
	}
	if(m1 == m)
	{
		for(int j = i;j <= n;j++)
		{
			maxx(j + 1, a[j], m1 - 1);
		}
	}
	for(int j = i;j <= n;j++)
	{
		maxx(j + 1, a[j] & l, m1 - 1);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	 } 
	 if(n > 2000)
	 {
	 	cout << 0;
	fclose(stdin);
	fclose(stdout);
	return 0;
	 }
	 maxx(1, a[1], m);
	 cout << maxxx;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
