#include<bits/stdc++.h>
using namespace std;
#define int long long
int in[35];
struct node
{
	int b[35];
};
node a[200005];

int num[35];

int ans1[35];

int ans;

int n,m;

int cnt;
bool cmp(node a,node b)
{
	return a.b[cnt]>b.b[cnt];
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	in[0]=1;
	ans1[0]=1;
	for(int i=1;i<=30;i++)
	{
		in[i]=in[i-1]*2;
		ans1[i]=1;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int o;
		cin>>o;
		for(int j=30;j>=0;j--)
		{
			if(o>=in[j])
			{
				a[i].b[j]=1;
				o-=in[j];
			} 
		}
	}
	for(int i=0;i<=30;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j].b[i]==1)
			{
				num[i]++;
			}
		}
	}
	for(int i=35;i>=0;i--)
	{
		if(num[i]==m)
		{
			cnt=i;
			sort(a+1,a+n+1,cmp);
			for(int k=0;k<=30;k++)
			{
				for(int j=1;j<=m;j++)
				{
					ans1[k]=(ans1[k]&&a[j].b[k]);
				}
			}
			for(int k=0;k<=30;k++)
			{
				if(ans1[k]==1)
				{
					ans+=ans1[k]*in[k];
				}
			}
			cout<<ans<<endl;
			return 0;
		}
		else if(num[i]>m)
		{
			cnt=i;
			sort(a+1,a+n+1,cmp);
			int numi=num[i];
			for(int k=i;k>=0;k--)
			{
				int numj=0;
				for(int j=1;j<=numi;j++)
				{
					if(a[j].b[k]==1)
					{
						numj++;
					}
				}
				if(numj>=m)
				{
					cnt=k;
					sort(a+1,a+numi+1,cmp);//3,600,000
					numi=numj;
				}
			}//9,600,000 18,000,000
			for(int k=0;k<=30;k++)
			{
				for(int j=1;j<=m;j++)
				{
					ans1[k]=(ans1[k]&&a[j].b[k]);
				}
			}
			for(int k=0;k<=30;k++)
			{
				if(ans1[k]==1)
				{
					ans+=ans1[k]*in[k];
				}
			}
			cout<<ans<<endl;
			return 0;
		}
	} 
} 
