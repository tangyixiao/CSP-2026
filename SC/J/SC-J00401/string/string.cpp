#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin >> n;
	long long sc=0;
	for (int i=1;i<=n;i++)
	{
		long long a;
		char x;
		cin >> a;
		cin >> x;
		for (long long j=sc;j<a;j++)
		{
			s[j]=x;
		}
		sc+=a;
	}
	long long cnt=0;
	for (int i=0;i<(s.size()/2);i++)
	{
		if (s[i]!=s[s.size()-1-i])
			cnt++;
	}
	cout << cnt << endl << s;
	return 0;
}