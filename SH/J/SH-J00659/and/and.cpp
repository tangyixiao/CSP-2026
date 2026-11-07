#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
struct AND
{
	int a[31];
	int len=0;
	int f=0;
}t[200005];
bool cmp(AND a,AND b)
{
	return a.len>b.len;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		while(k!=0)
		{
			t[i].a[t[i].len]=k%2;
			k/=2;
			t[i].len++;
		}
	}
	sort(t,t+n,cmp);
	for(int i=t[0].len;i>0;i--)
	{
		int cnt=0;
		for(int j=0;j<n;j++)
		{
			if(t[j].len>=i && t[j].a[i-1]==1 && t[j].f!=-1) cnt++;
		}
		if(cnt>=m)
		{
			for(int j=0;j<n;j++)
			{
				if(t[j].len>=i && t[j].a[i-1]==1) continue;
				else t[j].f=-1;
			}
			int c=1;
			for(int j=1;j<i;j++)
			{
				c*=2;
			}
			ans+=c;
		}
	}
	cout<<ans;
}
