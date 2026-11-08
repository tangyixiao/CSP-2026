#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a;
	string b;
	cin >> n;
	string ans = "";
	int sum = 0;
	for(int i = 1;i <= n;i++)
	{
		cin >> a >> b;
		for(int j = 1;j <= a;j++)
		{
			sum++;
			ans += b;
		}
	}
	string iop = "";
	string qwe = "";
	for(int i = 1;i <= sum/2;i++)
	{
		iop += ans[i-1];
	}
	for(int i = sum;i >= sum/2;i--)
	{
		qwe += ans[i-1];
	}
	int z = 0;
	for(int i = 1;i <= sum/2;i++)
	{
		if(qwe[i-1] != iop[i-1])
		{
			z++;
		}
	}
	cout << z;
	return 0;
}
