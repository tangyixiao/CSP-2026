#include <bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
char b[200005];
int main()
{
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i] >> b[i];
	}
	if (n == 1)
	{
		cout << "0";
	}
	if (n == 2)
	{
		if (a[0] >= a[1])
		{
			cout << a[1];
		}
		else
		{
			cout << a[0];
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
