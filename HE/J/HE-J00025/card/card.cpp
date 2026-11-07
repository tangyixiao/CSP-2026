#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;
const int N = 5e5 + 5,M = 3e5 + 5;
int n,m,a[N],cnt[M],ans;
int vis[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
		cin >> a[i];
	for (int i = 1;i <= n;i++)
	{
		vector<int> b,w;
		for (int j = i;j <= n;j++)
		{
			for (int l = 0;l < b.size();l++)
			{
				if (b[l] == a[j])
				{
					for (int p = l;p < j;p ++)
						w[p] = 0; 
				}
			}
			b.push_back(a[j]);
			w.push_back(1);
		}
		for (int j = 0;j < w.size();j++)
			cnt[b[j]] += w[j];
	}
	for (int i = 1;i <= m;i++)
		cout << cnt[i] << ' ';
	return 0;
 } 
