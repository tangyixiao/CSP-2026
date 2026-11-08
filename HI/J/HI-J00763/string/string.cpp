#include <bits/stdc++.h>
using namespace std;
long long n,m;
string s,c,k;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i ++)
	{
		cin >> m;
		cin >> s[i];
		for(int j = 1;j <= m;j ++)
		{
			c = c + s[i];
		}
    }
	for(int i = c.size()-1;i>=0;i --)
	{
		k =  k + c[i];
	}
	if(k == c)
	{
		cout << 0;
	}
	return 0;
}
