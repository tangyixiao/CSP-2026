#include<bits/stdc++.h>
using namespace std;
struct node{
	int x;
	char a;
}up[200005],down[200005];
int n,num[200005],h=1,t=0,hh=1,tt=0;
char a[200005];
long long ans=0; 
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
		scanf("%c",&a[i]);
		scanf("%c",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		up[++t].a=a[i];
		up[t].x=num[i];
		down[++tt].a=a[n-i+1];
		down[tt].x=num[n-i+1];
		while(t>=h&&tt>=hh)
		{
			if(up[h].a!=down[hh].a)
			{
				if(up[h].x<down[hh].x)
				{
					ans+=up[h].x;
					down[hh].x-=up[h].x;
					h++;
				}
				else if(up[h].x>down[hh].x)
				{
					ans+=down[hh].x;
					up[h].x-=down[hh].x;
					hh++;
				}
				else
				{
					ans+=up[h].x;
					h++;
					hh++;
				}
			}
			else
			{
				if(up[h].x<down[hh].x)
				{
					down[hh].x-=up[h].x;
					h++;
				}
				else if(up[h].x>down[hh].x)
				{
					up[h].x-=down[hh].x;
					hh++;
				}
				else
				{
					h++;
					hh++;
				}
			}
		}
	}
	printf("%lld",ans/2);
	return 0;
}