#include <bits/stdc++.h>
using namespace std;

int a[500005];
int b[300005];
bool tmp[300005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	stack<int> s; 
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = i;j <= n;j++)
		{
			if(tmp[a[j]] == 0)
			{
				s.push(a[j]);
				tmp[a[j]] = 1;
			}
			else
			{
				while(s.top() != a[j])
				{
					tmp[s.top()] = 0; 
					s.pop();
				}
			}
		}
		while(s.size() != 0)
		{
			//cout << s.top() << " ";
			b[s.top()]++;
			s.pop();
		} 
		//cout << endl;
		for(int j = 1;j <= n;j++)
		{
	 		tmp[j] = 0;
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << b[i] << " ";
	}
}
