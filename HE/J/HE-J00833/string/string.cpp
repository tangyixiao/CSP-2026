#include <bits/stdc++.h>;
using namespace std; 
int main()
{
	freout("string.in","r",stdin);
	freout("string.out","w",stdout);
	int n,,b,a[];
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		b += a[i];
	}
	cout << n-2;
	return 0;
}
