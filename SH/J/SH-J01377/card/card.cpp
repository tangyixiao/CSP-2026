#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int N=1000005;
LL n,k;
LL a[N];
map<int,int>mp;
void solve(int m)
{
	set<int>s;
	stack<int>q;
	for(int i=m;i<=n;i++)
	{
		//cout<<i<<' '<<s.size()<<' ';
		if(s.count(a[i])!=0)
		{
			while(!q.empty())
			{
				int x=q.top();
				q.pop();
				s.erase(x);
				//cout<<s.size()<<' ';
				if(x==a[i])
				{
					break;
				}
				
			}
		}
		s.insert(a[i]);
		q.push(a[i]);
		//cout<<s.size()<<'\n';
		//cout<<'\n';
	}
	bool vis[N]={};
	for(int i=1;i<=n;i++)
	{
		if(s.count(a[i])!=0 && !vis[a[i]])
		{
			vis[a[i]]=1;
			mp[a[i]]++;
		//	cout<<a[i]<<' ';
		}
	}
	//cout<<endl<<endl;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int j=1;j<=n;j++)
	{
		solve(j);
	}
	sort(a+1,a+1+n);
	bool vis[N]={};
	for(int i=1;i<=n;i++)if(!vis[a[i]])
	{
		vis[a[i]]=1;
		cout<<mp[a[i]]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
