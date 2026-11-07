#include <bits/stdc++.h>
using namespace std;
bool f[300005];
int ans[300005];
int a[300005];
int st=1;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n , m;
	cin >> n >> m;
	
	
	
	
	
	if(n<=5000)
	{
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
	for(int i = 1; i <= n; i++)
	{
		stack <int> q;
		memset(f,0,sizeof(f));
		for(int j = i; j <= n; j++)
		{
			if(f[a[j]] == 0)
			{
				q.push(a[j]);	
				f[a[j]] = 1;
			} 
			else
			{
				while(q.top()!= a[j])
				{
					f[q.top()] = 0;
					q.pop();
				}
				
			}
		}
		for(int j = 1; j <= m; j++)
		{
			if(f[j])
			{
				ans[j]++;
			}
		}
	}
	for(int j = 1; j <= m; j++)
	{
		cout << ans[j]<<" ";
	}
	return 0;
	}
	
	
	
	
	else
	{
		stack <int> q;
		for(int i = 1; i <= n; i++)
		{
			int num;
			cin >> num;
			if(f[num] ==0)
			{
				q.push(num);
				f[num] = 1;
			
			}
			else
			{
				while(q.top()!= num)
				{
					f[q.top()] = 0;
					q.pop();
				}
				st=i;
			}
		
		}
		int sz = q.size();
		for(int i = sz; i >=1; i--)
		{
			a[i] = q.top();
			q.pop();
		}
		for(int i = 1; i <= n; i++)
		{
			if(i <= st)
			{
				for(int j = 1; j <= sz; j++)
				{
					ans[a[j]]++;
				}
			}
			else
			{
				for(int j = i-st+1; j <= sz; j++)
				{
					ans[a[j]]++;
				}
			}
		}
		for(int j = 1; j <= m; j++)
		{
			cout << ans[j]<<" ";
		}
	}
	return 0;
}
