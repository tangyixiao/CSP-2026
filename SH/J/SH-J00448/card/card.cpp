#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
bool vis[500005];
int cnt[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	stack<int> s;
	int t=n;
	while(t--)
	{
		memset(vis,0,sizeof(vis));
		for(int i=n-t;i<=n;i++)
		{
			if(vis[a[i]]!=0)
			{
				while(s.top()!=a[i]) s.pop();
				s.pop();
				vis[a[i]]=0;
			}
			s.push(a[i]);
			//cout<<"push:"<<a[i]<<endl;
			vis[a[i]]=1;
		}
		while(!s.empty())
		{
			cnt[s.top()]++;
			s.pop();
		}
//		for(int i=1;i<=n;i++)
//		{
//			cout<<cnt[i]<<" "; 
//		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" "; 
	return 0;
}

