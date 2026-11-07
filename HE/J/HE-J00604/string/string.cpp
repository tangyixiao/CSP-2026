#include<bits/stdc++.h>
using namespace std;
int a,as,b,bs,n,l,r;
bool a2,b2;
char a1,as1,b1,bs1;
long long ans;
int p[200005];
char q[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n; 
	for(int i=1;i<=n;i++)
	{
		cin>>p[i]>>q[i];
	} 
	a2=true;
	b2=true;
	l=1;
	r=n;
	while(l!=r)
	{
		if(a2)
		{
			a=p[l];
			a1=q[l];
		}
		else
		{
			a=as;
			a1=as1;
		}
		if(b2)
		{
			b=p[r];
			b1=q[r];
		}
		else
		{
			b=bs;
			b1=bs1;
		}
		if(a>b)
		{
			if(a1!=b1)
			{
				ans+=b;
			} 
			as=a-b;
			as1=a1;
			if(a2==true)
			{
				a2=false;
				l++;
			}
			b2==true;
		}
		else if(a<b)
		{
			if(a1!=b1)
			{
				ans+=a;
			}
			bs=b-a;
			bs1=b1;
			if(b2==true)
			{
				b2=false;
				r--;
			}
			a2==true;
			as==0;
		}
		else
		{
			l++;
			r--;
			a2==true;
			b2==true;
		}
		if(l>n/2)
		{
			l=n/2;
		}
	}
	cout<<ans;
	return 0;
}
