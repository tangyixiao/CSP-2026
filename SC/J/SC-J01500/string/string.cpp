#include<bits/stdc++.h>
using namespace std;
struct hui{
	int number;
	char e;
}a[200005];
long long sum = 0;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;   
	cin >> n;
	bool h = true;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].number >> a[i].e;
		if(i > 1)
		{
			if (a[i].e != a[i - 1].e)
			{
				h = false;
			}
		}
		if(h)
		{
			sum += a[i].number;
		}
	}
	if (h == true)
	{
		cout << 0;
		return 0;
	}
	cout << sum;
	return 0;
}