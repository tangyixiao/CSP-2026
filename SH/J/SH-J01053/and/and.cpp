#include <bits/stdc++.h>
using namespace std;
const int N = 2 * (1e5) + 10;
int e[N][35];
int ton[35];
void change(unsigned long long k,int o)
{
	unsigned long long use = 1;
	int t = 0;
	while (use < k)
	{
		use *= 2;
		t++;
	}
	while (k > 0)
	{
		if (k >= use)
		{
			k -= use;
			e[o][t] = 1;
		}
		ton[t] += e[o][t];
		use /= 2;
		t--;
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	int n,m;
	scanf("%d%d",&n,&m);
	queue<int> q;
	unsigned long long k;
	for (int i = 0;i < n;i++)
	{
		scanf("%ull",&k);
		change(k,i);
		q.push(i);
	}
	int f = 35;
	int use;
	k = 0;
	bool flag = false;
	while (q.size() > m)
	{
		for (int i = (f-1);i >= 0;i--)
		{
			if (ton[i] >= m)
			{
				f = i;
				break;
			}
			if (i == 0)
			{
				f = -1;
				break;
			}
		}
		if (f == -1)
		{
			flag = true;
			break;
		}
		for (int i = 0;i < q.size();i++)
		{
			use = q.front();
			q.pop();
			if (e[use][f] == 1)
			{
				q.push(use);
			}
			else
			{
				for (int i = 34;i >= 0;i--)
				{
					ton[i] -= e[use][i];
				}
			}
		}
	}
	unsigned ans = 0;
	if (flag)
	{
		k = 0;
		ans = 1;
		for (int i = 0;i <= 34;i++)
		{
			if (e[q.front()][i] == 1)
			{
				k += ans;
			}
			ans *= 2;
		}
	}
	else
	{
		for (int i = 0;i <= 34;i++)
		{
			if (ton[i] >= m)
			{
				k += pow(2,i); 
			}
		}
	}
	printf("%u",k);
	return 0;
 } 
