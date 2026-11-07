#include<bits/stdc++.h>
using namespace std;
struct node{
	node* to;
	int n;
}st;
node* now;
int n,m;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	now=&st;
	cin>>n>>m;
	for(int i=1,tmp;i<=n;i++)
	{
		cin>>tmp;
		now->to=new node;
		now=now->to;
		now->n=tmp;
	}
	for(int i=n;i>=1;i--)
	{
		now=&st;
		now=(i==n?now:now->to);
		for(int j=1;j<=n;j++)
		{
			node* last=now;now=now->to;
			map<int,node*> mp;
			if(!mp[now->n])mp[now->n]=last;
			else  mp[now->n]->to=now;
		}
	}
	now=&st;map<int,long long> mp;
	while(now->to!=NULL)
		mp[now->n]++,now=now->to;
	for(int i=1;i<=m;i++)
		cout<<mp[i]<<' ';
	return 0;
}