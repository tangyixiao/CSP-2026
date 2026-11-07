#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
long long n , m , B , x , sum;
int ss[30] , a[N] , aa[N] , t[N];
bool s[N][30];
string sa[N];
bool cmp(string s1 , string s2)
{
	return s1 > s2;
}
int main()
{
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i ++)
	{
		cin >> a[i];
		B = 30;
		x = a[i];
		while (x > 0)
		{
			if (x >= pow(2 , B))
			{
				x -= pow(2 , B);
				ss[B] ++;
				s[i][B] = true;
			}
			B --;
		}
	}
	for (int i = 30 ; i >= 0 ; i --)
	{
		if (ss[i] >= m)
		{
			for (int j = 1 ; j <= n ; j ++)
			{
				if (s[j][i] == true)
				{
					sa[j] += char(i + 48);
				}
			}
		}
	}
	sort(sa + 1 , sa + n + 1 , cmp);
	for (int i = 1 ; i <= m ; i ++)
	{
		for (int j = 0 ; j < sa[i].size() ; j ++)
		{
			t[sa[i][j] - 48] ++;
		}
	}
	for (int i = 0 ; i <= 30 ; i ++)
	{
		if (t[i] == m)
		{
			sum += pow(2 , i);
		} 
	}
	cout << sum;
	return 0;
}
