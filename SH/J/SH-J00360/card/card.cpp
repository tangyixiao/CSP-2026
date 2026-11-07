#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
int n,m,a[200010];
bool insta[200010];
int ans[300010]; 
stack<int>s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m; 
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i];
	}
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = i ; j <= n ; j++)
		{
			int da_chu = a[j];
			if(!insta[da_chu]) 
			{
				s.push(da_chu);
				insta[da_chu] = 1;
			}
			else
			{
				while(s.top() != da_chu)
				{
					insta[s.top()] = 0; 
					s.pop();
				}
			}
		}
		while(!s.empty())
		{
			insta[s.top()] = 0;
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i = 1 ; i <= m ; i++)
	{
		if(ans[i]) cout << ans[i] << " "; 
	}
	return 0;
}
