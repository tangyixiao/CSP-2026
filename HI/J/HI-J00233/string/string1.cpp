#include <bits/stdc++.h>
using namespace std;
int n,a[1000000000],x;
string s;
char c;
int main()
{
	freopen("stringin","r",stdin);
	freopen("stringout","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> x >> c;
		for(int j=1;j<=x;j++)
		{
			s+=c;
		}
	}
	return 0;
}
