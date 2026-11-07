#include <iostream>
#include <vector> 

using namespace std;

const int N = 5e5 + 5, M = 3e5 + 5;
int a[N], cnt[M];
int n, m;

void solve(int j, int x[])
{
	vector<int> v;
	for(;j < n;j++)
	{
		int k = j + 1;
		while(x[j] != x[k] && k < n)
		{
			k++;
		}
		if(k == n)
		{
			v.push_back(x[j]);
		}
		else
		{
			j = k - 1;
		}
	}
	for(const auto& a : v)
	{
		cnt[a]++;
	}
} 

int main(void)
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	bool f1 = true;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	for(int i = 0;i < n;i++)
	{
		solve(i, a);
	}
	for(int i = 1;i <= m;i++)
	{
		cout << cnt[i] << ' ';
	}
} 