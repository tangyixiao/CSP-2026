#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[500010];
int d[500010];
int p=0,pos;
int cnt[300010];
bool ju;
void solve1(int g,int b) {
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=0;k<p;k++)
			{
				if(d[k]==a[j])
				{
					ju=true;
					pos=k;
				}
			}
			if(!ju) d[p++]=a[j];
			else
			{
				for(int l=pos;l<p;l++)
				{
					d[l]=0;
				}
				p=pos;
				d[p++]=a[j];
			}
		}
		for(int o=0;o<p;o++)
		{
			++cnt[a[o]];
		}
		memset(d,0,sizeof(d));
		ju=false;
		p=0;
		pos=0;
	}
	for(int q=1;q<=m;q++)
	{
		printf("%d ",cnt[q]);
	}
}
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	if(n<=5) solve1(n,m);
	return 0;
}
