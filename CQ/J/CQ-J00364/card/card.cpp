#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N],m,n;
int ans[N];
int check(int,int);
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	for(int i=1;i<=n;i++)
	{
		queue<int> p;
		for(int j=i;j<=n;j++)
		{
			queue<int> q;
			while(!p.empty())
			{
				int t=p.front();
				p.pop();
				if(t==a[j])
				{
					while(!p.empty()) p.pop();
				}
				else q.push(t);
			}
			while(!q.empty())
			{
				p.push(q.front());
				q.pop();
			}
			p.push(a[j]);
		}
		/*while(!p.empty())
		{
			cout<<p.front();
			p.pop();
		}
		cout<<endl;*/
		while(!p.empty())
		{
			int t=p.front();
			p.pop();
			ans[t]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
}
