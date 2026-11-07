#include <bits/stdc++.h>
using namespace std;


int ls[100005],maxlen,ls3[100005];
string ls2[100005];
int ans[100005];
int cnt=0,mod=1;
bool cmp(string x,string y)
{
	for(int i=0;i<int(x.size());i++)
	{
		if (x[i]>y[i]) return x>y;
		else if (y[i]>x[i]) return y>x;
	}
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>ls[i];
	for(int i=1;i<=n;i++)
	{
		while (ls[i]!=0)
		{
			ls2[i]=char(ls[i]%2+'0')+ls2[i];
			ls[i]/=2;
			
		}
		maxlen=max(maxlen,int(ls2[i].size()));
		
	}
	for(int i=1;i<=n;i++)
	{
		while (int(ls2[i].size())!=maxlen)
		{
			ls2[i]='0'+ls2[i];
		}
	}
	sort(ls2+1,ls2+n+1,cmp);
	for(int i=m;i>=1;i--)
	{
		for(int j=maxlen-1;j>=0;j--)
		{
			if (ls2[i][j]=='1' && ls2[i+1][j]=='1') ans[j]=1;
			else ans[j]=0;
		
		}
	}
	cnt=0;
	for(int i=maxlen-1;i>=0;i--)
	{
		
		cnt+=ans[i]*mod;
		
		mod*=2;
	}
	cout<<cnt;

}