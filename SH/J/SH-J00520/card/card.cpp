#include<iostream>
#include<vector>
using namespace std;

int a[500002];
bool b[3002];
long long c[3002];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	if (n <= 5000 || m <= 3000)
	{
		vector<int>stk;
		for (int i = 1;i <= n;i++)
		{
			if (a[i-1] == a[i] && a[i] == a[i+1])
			{
				for (int j = 1;j <= m;j++) c[j] += b[j];
				continue;
			}
			while (!stk.empty())
			{
				b[stk[stk.size()-1]] = 0;
				stk.pop_back();
			}
			for (int j = i;j <= n;j++)
			{
				while (b[a[j]])
				{
					b[stk[stk.size()-1]] = 0;
					stk.pop_back();
				}
				stk.push_back(a[j]);
				b[a[j]] = 1;
			}
			for (int j = 1;j <= m;j++) c[j] += b[j];
		}
		for (int i = 1;i <= m;i++) cout << c[i] << ' ';
	}
	else
	{
		int num = 0;
		for (int i = 1;i <= n;i++)
		{
			num++;
			if (a[i] != a[i+1]) cout << num << ' ',num = 0;
		}
	}
	return 0;
}
