#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin >> n;
	int a[1005]; long long len=0;
	char c[1005]; string s="";
	for (int i=0;i<n;i++)
	{
		cin >> a[i] >> c[i];
		len = len+a[i];
		for (int j=0;j<a[i];j++)
		{
			s += c[i];	
		}
	}long long cnt=0;
	for (int i=0;i<len;i++)
	{
		if (s[i] == s[i+1])
			cnt++;
		if (cnt == len)
		{
			cout << 0;
			return 0;	
		}
	}string w="";
	for (int i=len-1;i>=0;i--)
	{
		w += s[i];
	}
	if (w == s)
	{
		cout << 0;
		return 0;
	}
	for (int i=0;i<len;i++)
	{
		cout << a[0];
		break;
	}
	return 0;
}

