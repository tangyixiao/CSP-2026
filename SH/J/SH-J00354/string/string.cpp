#include <bits/stdc++.h>
#include <string>
using namespace std;
int n,a,sum;
long long x,l;
string r,r1;
char c;
int main()
{
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a;
		cin >> c;
		for (int j = 1;j <= a;j++)
			r+=c;
		x += a;
	}
	for (int j = 1;j <= x;j++)
			r1+=c;
	//cout << r;
	if (r.length() % 2 == 1)
	{
		l = (r.length() + 1) / 2;
	}
	else
	{
		l = r.length() / 2;
	}
	if (r == r1)
	{
		cout << "0";
		return 0;
	}
	for (int i = 1;i <= l;i++)
	{
		if(r[i] != r[x - i + 1])
		{
			sum++;
		}
	}
	cout << sum;
	return 0;
}
