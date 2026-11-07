#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,num = 1,sum = 0;
	cin >> n;
	char m[100005];
	for(int i = 1; i <= n; i++)
	{
		int a;
		char b;
		cin >> a >> b;
		for(int j = num; j <= a + num - 1;j++)
		{
			m[j] = b;
		}
		num += a;
	}
	int k = num - 1;
	for(int i = 1; i * i <= num - 1; i++)
	{
		if(m[i] != m[k])
		{
			sum++;
		}
		k--;
	}
	cout << sum;
	return 0;
} 
