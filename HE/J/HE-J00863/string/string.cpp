#include <bits/stdc++.h>
using namespace std;
string m;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		int a;
		string b;
		cin >> a >> b;
		for(int i = 1;i <= a;i++)
		{
			m+=b;
		}
	}
	int num = 0;
	int y = m.length();
	for(int i = 0;i < y/2;i++)
	{
		if(m[i] != m[y-i-1])
		{
			num++;
		}
	}
	cout << num;
	return 0;
}
