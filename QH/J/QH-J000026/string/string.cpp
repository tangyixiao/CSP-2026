#include<bits/stdc++.h>
using namespacem std;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	string s[100000005];
	for(int i=1; i<=n; i++)
	{
		cin >> s[i];
	}
	int sum = 0, m;
	while(s[m] == s[n-m+1])
	{
		if(s[m] != s[n-m+1])
		{
			s[n-m+1] = s[m];
		}
		sum++:
	}
	cout << sum;
	return 0;
}
