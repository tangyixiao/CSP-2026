#include <bits/stdc++.h>;
using namespace std; 
int main()
{
	freout("and.in","r",stdin);
	freout("and.out","w",stdout);
	int n,m,a[];
	cin >> n >> m;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
		if(a[i] <= a[i-1])
		{
			cout << a[i];
			break;
		} 
	}
	return 0;
}
