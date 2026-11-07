#include <bits/stdc++.h>
using namespace std;
int a,n,l,ans = 0;
char c;
string s = "";
int main()
{
	freofen("string.in",'w');
	freofen("string.out",'w');
	while(n--)
	{
		cin >> a >> c;
		while(a--)
		{
			s += c;
		}
	}
	l = s.size();
	for(int i = 0;i < l;i++)
	{
		if (s[i] != s[l - 1 - i])
		{
			ans++;
		}
	}
	cout << ans / 2;
	return 0;
} 
