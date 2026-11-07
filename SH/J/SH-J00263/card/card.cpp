#include <bits/stdc++.h>
using namespace std;
int a[500010],cnt[300010];
bool f[300010];
stack<int> q;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	int n,m;
	cin >>n >>m;
	for (int i = 1;i <= n;i++)
		cin >> a[i];
	for (int i = 1;i <= n;i++)
	{
		memset(f,0,sizeof f);
		for (int j = i;j <= n;j++)
		{
			if(!f[a[j]])
				f[a[j]] = 1,q.push(a[j]);
			else
			{
				while(q.top() != a[j])
					f[q.top()] = 0,q.pop();
				q.pop();
				q.push(a[j]);
			}
		}
		while(q.size())
			cnt[q.top()]++,q.pop();
//		for (int j = 1;j <= m;j++)
//			cout << cnt[j] << " \n"[j == m];
	}
	for (int i = 1;i <= m;i++)
		cout << cnt[i] <<" ";
	return 0;
 } 
