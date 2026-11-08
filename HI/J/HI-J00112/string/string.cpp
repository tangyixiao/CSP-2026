#include <bits/stdc++.h>
using namespace std;
string s,s1;
long long ans1 = 0,ans2 = 0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin >> n;
	
	while (n--)
	{
		long long a;
		char c;
		cin >> a >> c;
		for (long long i = 1 ; i <= a ; i++)
		{
			s += c;
		}
	}
	
	long long len = s.length();
	for (long long i = 0 ; i < len / 2 ; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			s1 += s[len - i - 1];
			ans1++;
		}
		else s1 += s[i];
		
		
	}
	
	cout << ans1;
	return 0; 
}
