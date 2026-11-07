#include <bits/stdc++.h>
using namespace std;

int n,ans;
string s;

int main()
{
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	
	cin >> n;
	for (int i = 1 ; i <= n ; i++)
	{
		int a;
		string x;
		cin >> a >> x;
		for (int j = 1 ; j <= a ; j++)
			s = s+x;
	}
	
	int n1 = s.size();
	for (int i = 0 ; i <= n1/2-1;i++)
		if (s[i] != s[n1-i-1])
			ans++;
	
	cout << ans;
	
	return 0;
 } 
