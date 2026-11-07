#include<bits/stdc++.h>
using namespace std;
char s[1000000005];
int n;
struct node{
	long long t;
	char a;
}c[2000005];
long long cnt,ans,p;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%lld%c",&c[i].t,&c[i].a);
//		for(int i=1;i<=t;i++)
//			s[p+i]=a;
//		p+=t;	
	}
	long long r=n,l=1;
	while(r>=l) 
	{
		if(c[l].a!=c[r].a)
		{
			if(c[l].t>c[r].t)
			{
				cnt+=c[r].t;
				c[l].t-=c[r].t;
				r--;
			}
			else if(c[l].t<c[r].t)
			{
				cnt+=c[l].t;
				c[r].t-=c[l].t;
				l++;
			}
			else
			{
				cnt+=c[l].t;
				l++,r--;
			}
		}
		else
		{
			if(c[l].t>c[r].t)
			{
				c[l].t-=c[r].t;
				r--;
			}
			else if(c[l].t<c[r].t)
			{
				c[r].t-=c[l].t;
				l++;
			}
			else
			{
				l++,r--;
			}
		}
	}
	cout<<cnt;
	return 0;
}
