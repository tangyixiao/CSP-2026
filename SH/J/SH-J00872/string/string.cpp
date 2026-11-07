#include <bits/stdc++.h>
using namespace std;
long long n,sum;
char c;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	while (n--)
	{
		cin >> sum >> c;
		while (sum--) s+=c;
	}
	long long siz=s.size();
	long long l=0,r=siz-1,ans=0;
	if (siz%2==0)
	{
		while (l<=siz/2 && r>=siz/2)
		{
			if (s[l]!=s[r]) ans++;
			l++;r--;
		}
	}
	else
	{
		while (l<=siz/2-1 && r>=siz/2+1)
		{
			if (s[l]!=s[r]) ans++;
			l++;r--;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
