#include<bits/stdc++.h>
using namespace std;
unordered_map <char,long long> mp;
int p[30];
/*
bool check(string s)
{
	string s1 = "";
	for(int i = s.size() - 1;i >= 0;i --)
	{
		s1 += s[i];
	}
	if(s1 == s)
	{
		return true;
	}
	else
	{
		return false;
	}
}*/
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	cin >> n;
	long long l = 0;
	long long maxn = 0;
	for(int i = 1;i <= n;i ++)
	{
		long long a;
		char c;
		cin >> a >> c;
		mp[c] += a;
		maxn = max(maxn,mp[c]);
		/*for(int j = 1;j <= a;j ++)
		{
			s += c;
		}*/
		l += a; 
	}
	long long ans = 0;
	if(l % 2 == 0)
	{
		ans = l - maxn;
		if(ans < 0)
		{
			cout << 0;
		}
		else
		{
			cout << ans;
		}
	}
	else
	{
		ans = l - maxn - 1;
		if(ans < 0)
		{
			cout << 0;
		}
		else
		{
			cout << ans;
		}
	}
	//cout << s;
	//cout << mp['a'] << endl;
	/*for(int i = 0;i < ((s.size() + 1) / 2);i ++)
	{
		if(s[i] != s[l - 1 - i])
		{
			//cout << s[i] << s[l - 1 - i] << endl;
			if(mp[s[i]] >= mp[s[l - 1 - i]])
			{
				mp[s[i]] ++;
				ans ++;
				//cout << i << endl;
			}
		}
	}*/
	return 0;
}
