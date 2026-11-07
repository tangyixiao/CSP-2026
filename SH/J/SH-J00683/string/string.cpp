#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define int long long
int len[200010], len1[100010], len2 [100010];
char c[200010], c1[100010], c2[100010];
int n;
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int sum = 0;
	string s = "";
	cin >> n;
	for (int i = 1; i <= n; i ++)
	{
		cin >> len[i] >> c[i];
		sum += len[i];
	}
	int strlen = sum/2, now = 1;
	while (now <= n)
	{
		if (len[now] >= strlen)
		{
			len1[now] = strlen;
			c1[now] = c[now];
			break;
			
		}
		else
		{
			len1[now] = len[now];
			c1[now] = c[now];
			strlen -= len[now];
		}
		now ++;
	}
	strlen = sum/2, now = 1;
	while (now <= n)
	{
		if (len[n-now+1] >= strlen)
		{
			len2[now] = strlen;
			c2[now] = c[n-now+1];
			break;
			
		}
		else
		{
			len2[now] = len[n-now+1];
			c2[now] = c[n-now+1];
			strlen -= len[n-now+1];
		}
		now ++;
	}
//	cout << "\n";
//	for (int i = 1; i <= n; i ++)
//	{
//		cout << len1[i] << " " << c1[i] << endl;
//	}
//	cout << "\n";
//	for (int i = 1; i <= n; i ++)
//	{
//		cout << len2[i] << " " << c2[i] << endl;
//	}
	int cnt = 0, i = 1, j = 1;
	while (len1[i] && len2[i])
	{
		int cha = min(len1[i], len2[j]);
		//cout << cha << len1[i] << len2[j] << endl;
		if (c1[i] != c2[j])
		{
			cnt += cha;
		}
		if (len1[i] == len2[j])
		{
			//cout << 1;
			i ++;
			j ++;
		}
		else if (len1[i] == cha)
		{
			//cout << 2;
			i ++;
			len2[j] -= cha;
		}
		else
		{
			//cout << 3;
			j ++;
			len1[i] -= cha;
		}
		//cout << endl << i << j;
	}
	cout << cnt;
	return 0;
}/*
3
2 a
2 b
1 c
*/
