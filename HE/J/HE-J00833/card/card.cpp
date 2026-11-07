#include <bits/stdc++.h>;
using namespace std; 
int main()
{
	freout("card.in","r",stdin);
	freout("card.out","w",stdout);
	int n,m,a[],b;
	cin >> n >> m;
	for(int i = 1;i <= m;i++)
	{
		cin >> a[i];
		if(a[i] == a[i-1])
		{
			a[i].add;
		}
		if(a[i] == i)
		{
			b += i;
		}
	}
	cout >> i;
	return 0;
}
