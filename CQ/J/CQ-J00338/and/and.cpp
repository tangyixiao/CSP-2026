#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,m,maxw;
int a[N],cnt[N]; 
bool b[N][33],ans[N];
queue<int> q,c;

void get(int x,int id)
{
	int w=0;
	while(x>0)
	{
		w++;
		if(x&1)
		{
			maxw=max(maxw,w);
			b[id][w]=1; cnt[w]++;
		}
		x/=2;
	}
}

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		get(a[i],i);
	}
	int maxx=0;
	for(int i=maxw;i>=1;i--)
	{
		if(cnt[i]>=m && !maxx)
		{
			maxx=i;
		}
		else if(cnt[i]>=m)
		{
			q.push(i);
		}
	}
	if(maxx==0)
	{
		cout<<"0";return 0;
	}
	int k=maxx;
	ans[maxx]=1;
	for(int i=1;i<=n;i++)
	{
		if(b[i][maxx]) c.push(i);
	}
	while(!q.empty())
	{
		int kx=0;
		k=q.front(); q.pop();
		vector<int> cc,cs; 
		while(!c.empty())
		{
			int v=c.front(); c.pop();
			cs.push_back(v);
			if(b[v][k]) 
			{
				kx++;
				cc.push_back(v);
			}
		}
		if(kx>=m)
		{
			for(int v:cc)
			{
				c.push(v);
			}
			ans[k]=1;
		}
		else
		{
			for(int v:cs)
			{
				c.push(v);
			} 
		}
	}
	int answer=0;
	for(int i=1;i<=n;i++)
	{
		if(ans[i]==1)
		{
			answer+=(1<<(i-1));
		//	cout<<i<<" "<<(1<<i)<<endl; 
		}
	}
	cout<<answer;
	return 0; 
}
/*
5 3
31 3 1 15 7
*/
