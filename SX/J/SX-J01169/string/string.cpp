#include <bits/stdc++.h>
using namespace std;
long long a[20005];
string s[20005];
long long n;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(long long i=1;i<=n;i++)
	{
		cin >> a[i] >> s[i];
	}
	if(n==1)cout << 0;
	if(n==2)
	{
		if(s[1]==s[2])cout << 0;
		else cout << 1;
	}
	//cout
	return 0;
}