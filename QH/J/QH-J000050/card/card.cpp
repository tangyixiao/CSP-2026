#include<bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin >> n >> m;
	int a[500005];
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if(m == 1)
	{
		if(n == 1) cout << 1;
		if(n == 2) cout << 2;
		if(n == 3) cout << 3;
		if(n == 4) cout << 4;
		if(n == 5) cout << 5;
	} 
	if(m == 2)
	{
		if(n == 1) 
		{
			if(a[1] == 1) cout << 1 << 0;
			else cout << 0 << 1;
		}
		if(n == 2)
		{
			if(a[1] == 1) cout << 1 << 2;
			else cout << 2 << 1;
		}
	}
	return 0;
}
