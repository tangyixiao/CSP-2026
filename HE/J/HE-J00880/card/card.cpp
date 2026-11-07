#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010],b[500010],k[500010],s[500010],l;
void fun(int x)
{
	memset(k,0,sizeof(k));
	memset(s,0,sizeof(s));
	l=0;
	for(int i=x;i<=n;i++)
	{
		if(k[a[i]]==0)
		{
			l++;
			k[a[i]]=l;
			s[l]=a[i];
		}
		else
		{
			for(int j=k[a[i]]+1;j<=l;j++) k[s[j]]=0;
			l=k[a[i]];
		}
	}
	for(int i=1;i<=l;i++) b[s[i]]++;
	return ;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++) fun(i);
	for(int i=1;i<=m;i++) printf("%lld ",b[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
