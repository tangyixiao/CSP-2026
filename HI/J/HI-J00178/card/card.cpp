#include <bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
const int maxv=3e5+5;
int n,m;
stack<int> q;
int a[maxn],b[maxv];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		while(!q.empty()) q.pop();
		for(int j=cnt;j<=n;j++)
		{
			q.push(a[j]);
			b[a[j]]++;
			if(b[a[j]]>1)
			{
				q.pop();
				b[a[j]--];
				while(q.top()!=a[j])
				{
					b[q.top()]--;
					q.pop();
				}
			}
		}
		cnt++;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<' ';
	}
	return 0;
}
