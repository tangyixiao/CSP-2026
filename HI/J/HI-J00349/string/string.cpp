#include <bits/stdc++.h>
using namespace std;

long long n;
string s;

bool check()
{
	int len = 0;
	if(s.size() % 2 != 0)
		len = s.size() -1;
	else
		len = s.size();
	string s1;
	string s2;
	for(int i = 0; i < len; i++)
		s1 += s[i];
	for(int i = len - 1; i >= 0; i--)
		s2 += s[i];
	if(s1 == s2)
		return true;
	return false;
		
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	long long len = 0;
	cin >> n;
	if(n == 0)
	{
		cout<<0;
		return 0;
	}
	if(n == 1)
	{
		cout << 0;
		return 0;
	}
	for(int i = 0; i < n; i++)
	{
		long long a;
		cin >> a;
		len += a;
		string c;
		cin >> c;
		while(a--)
		{
			s += c; 
		}
	}
	if(check() == 1)
	{
		cout << 0;
		return 0;
	}
	else
	{
		long long z = len;
		len--;
		long long ans = z / 2;
		long long left = len / 2;
		long long right = len / 2 + 1;
		while(s[left] == s[right])
		{
			left = right;
			right += 1;
			ans -= 1;
		}
		cout << ans;
	}
	return 0;
} 
