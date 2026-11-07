#include<bits/stdc++.h>
using namespace std;
string s;
char a[200005],b[200005];
long long n,ans,m[200005],num,pk=0,qk=0,c[200005];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m[i]>>a[i];
		num+=m[i];
	}
	pk=n;
	qk=1;
	long long q,p;
	q=m[qk];
	p=m[pk];
	while(1)
	{
		if(a[qk]==a[pk])
		{
			if(q>p)
			{
				q-=p;
				p=0;	
			}
			else
			{
				p-=q;
				q=0;
			}
		}
		else
		{
			if(q>p)
			{
				q-=p;
				ans+=p;
				p=0;
			}
			else
			{
				p-=q;
				ans+=q;
				q=0;
			}
		}
		if(p==0)
		{
			pk--;
			p=m[pk];
		}
		if(q==0)
		{
			qk++;
			q=m[qk];
		}
		if(qk>=pk)break;
	}
	cout<<ans;	
	return 0;
}
