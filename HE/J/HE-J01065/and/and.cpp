#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m;
int a[N],cnt[50],ansc,res[50][50],ans;
vector<int> e[50],tmp[50],old;
map<int,int> mp; 
bool cmp(int x,int y)
{
	return x>y;
}
void check(int num)
{
	int op=1;
	int temp=num;
	while(num)
	{
		if(num&1)
		{
			cnt[op]++;
			e[op].push_back(temp);
		}
		num>>=1;
		op++;
	}
}
void calc(int num,int fa)
{
	int op=1;
	int temp=num;
	while(num)
	{
		if(num&1)
		{
			res[fa][op]++;
			tmp[op].push_back(temp);
		}
		num>>=1;
		op++;
	}
}
void dfs(int i)
{
	if(i==0)
	{
		for(int v:old)
			{
				if(ans==0)
				{
					ans=v;
				}
				else
				{
					ans&=v;
				}
			}
			cout<<ans<<endl;
			exit(0);
	}
	int tot=0;
	for(auto v:old)
	{
		calc(v,i);
	}
	if(res[i][i-1]>=m)
	{
		old=tmp[i-1];
		memset(tmp,0,sizeof tmp);
		if(res[i][i-1]==m)
		{
			for(int v:old)
			{
				if(ans==0)
				{
					ans=v;
				}
				else
				{
					ans&=v;
				}
			}
			cout<<ans<<endl;
			exit(0);
		}
		dfs(i-1);
	}
	else 
	{
		dfs(i-1);
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
		mp[a[i]]++;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		check(a[i]);
	}
	for(int i=31;i>=1;i--)
	{
		if(cnt[i]>=m)
		{
			if(cnt[i]==m)
			{
				for(int v:e[i])
				{
					if(ans==0)
					{
						ans=v;
						continue;
					}
					ans&=v;
				}
				cout<<ans<<endl;
				return 0;
			}
			else
			{
				for(int v:e[i])
				{
					if(mp[v]>=m)
					{
						cout<<v;
						return 0;
					}
					break;
				}
				old=e[i];
				dfs(i);
			}
		}
	}
	cout<<ans;
	return 0;
}
