#include<iostream>
using namespace std;
int a[500005], c[300005];
bool b[500005];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	if(m == 1)
	{
		cout << n << endl;
		return 0;
	}
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		b[i] = true;
	}
	int t = 1;
	while(true)
	{
		for(int i = t; i <= n; i++)
		{
			for(int j = t; j <= i-1; j++)
			{
				if(a[i] == a[j])
				{
					for(int k = j; k <= i-1; k++)
					{
						b[k] = false;
					}
				}
			}
		}
		for(int i = t; i <= n; i++)
		{
			if(b[i] == true)
			{
				c[a[i]]++;
			}
			b[i] = true;
		}
		if(t == n) 
		{
			for(int i = 1; i <= m; i++)
			{
				cout << c[i] << " ";
			}
			return 0;
		}
		t++;
	}
	return 0;
}
