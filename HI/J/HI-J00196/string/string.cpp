#include <bits/stdc++.h>
using namespace std;
int n, sum, num;
long long a[200005];
char c[200005];
string S = " ", S1 = " ";
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		num += a[i];
		for(int j = 1; j <= a[i]; j++)
		{
			S += c[i];
		}
	}
	cout << 0;
	
	
	return 0;
}
