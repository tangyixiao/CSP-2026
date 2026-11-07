#include<bits/stdc++.h>
using namespace std;
long long n,a[500010],m,q[500010];
bool s[500010]={0},ok[500010]={1};
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int x=i-1,qi1=1,qi2=1;
		for(int j=x+1;j<=n;i++)
		{
			int ans=0,w;
			for(int p=1;p<=n;p++)
			{
				if(a[j]==a[p]&&s[p]==1&&ok[p]==1) ans++,w=p;
			}
			if(ans==0)
			{
				s[j]=1;
				q[qi1++]=a[j];
			}
			else
			{
				for(int p=w;p<=n;p++)
				{
					if(s[p]==1)
					{
						s[p]=0;
						ok[p]=0;
						qi2++;
					}
				}
			}
		}
		cout<<qi1-qi2;
	}
	return 0;
}
