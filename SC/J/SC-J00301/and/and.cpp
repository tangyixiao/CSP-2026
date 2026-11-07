#include<bits/stdc++.h>
using namespace std;
int bian(int x)
{
	int y=0;
	int h=1;
	while(x!=0)
	{
		y=y+x%2*h;
		x=x/2;
		h=h*10;
	}
	return y;
}
int yu(int x,int y)
{
int p,q;
	p=x;
	q=y;
	int c=0,d=0;
	while(x!=0)
	{
		x=x/10;
		c++;
	}
	while(y!=0)
	{
		y=y/10;
		d++;
	}
	int min=0;
	if(c>d)min=d;
	else min=c;
	int v[32],t[32];
	int h=1;
	int zhui=0;
	for(int i=0;i<min;i++)
	{
		v[i]=p%10;
		p=p/10;
		t[i]=q%10;
		q=q/10;
		if(v[i]==t[i])zhui=zhui+v[i]*h;
		h=h*2;
	}
	return zhui;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1],b[n+1];
	
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=bian(a[i]);
	}
	if(m==2)
	{
	int max=-1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
		if(yu(b[i],b[j])>max)max=yu(b[i],b[j]);	
		}
	}
	cout<<max;
    }
    if(m>2)
    {
    sort(a+1,a+n+1);
	cout<<a[n-m+2];
	}
	return 0;
}