#include <bits/stdc++.h>
using namespace std;
int n,a[200005],g, lit,cnt;
char c[30],k;
string s1, s2;
bool che(string s)
{
	for (int i = 0;i <= s.size();i++)
	{
		if (s[i] != s[i+1])
		{
			return false;
		}
	}
	return true; 
}
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for (int i = 1;i <= n;i++)
	{
	    cin >> a[i] >> c[i];	
	    for (int j = 1;j<=a[i];j++)
	    {
	    	s1 += c[i];
		}
	} 
	if (n <= 1)
    {
    	cout << 0;
    	return 0;
	}
	if (che(s1))
	{
		cout << 0;
		return 0;
	}
	int maxn=-1;
	for (int i = 1;i < n;i++)
	{
		maxn=max(a[i],a[i+1]);
	}
	for (int i = 1;i <= n;i++)
	{
	    if (a[i] == maxn)
		{
		    g = i;
		    break;
		}	
	} 
	for (int i = s1.size()-1;i >= 0;i--)
	{ 
		s2+=s1[i];
	}
	for (int i = 0;i < s1.size();i++)
	{
		if (s1[i] == c[g])
		{
			s2[i] = c[g];
			cnt++;
		}
		else if (s1[i] != s2[i])
		{
			s2[i] = s1[i];
			cnt++;
		}
	}
	cout << cnt;
	return 0;	
}  
