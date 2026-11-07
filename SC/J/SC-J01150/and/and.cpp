#include<iostream>
#include<algorithm>
using namespace std;
const int N=2e5+10;
int n,a[N],m,c,k;
int fun(int x,int y)
{
	int z;
	char v;
	string s1,s2,s3;
	while(x!=0)
	{
		z=x%2;
		v=z+'0';
		s1=v+s1;
		x/=2;
	}
	while(y!=0)
	{
		z=y%2;
		v=z+'0';
		s2=v+s2;
		y/=2;
	}
	z=min(s1.size(),s2.size());
	for(int i=0;i<z;++i)
	{
		v=s1[i]&s2[i];
		s3+=v;
	}
	z=0;
	int p=1,l;
	for(int i=s3.size()-1;i>=0;--i)
	{
		l=s3[i]-'0';
		z+=l*p;
		p*=2;
	}
	return z;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		scanf("%d",a+i);
	}
	sort(a+1,a+n+1,greater<int>());
	c=a[1];
	for(int i=2;i<=m;++i)
	{
		c=fun(c,a[i]);
	}
	cout<<c;
	return 0;
}