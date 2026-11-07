#include<bits/stdc++.h>
using namespace std;
long long n,m[200005],s=0,h,c=0;
char l[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>m[i]>>l[i];
		s=s+m[i];
	}
	long long i=1,j=1,k=s,g=n,f=m[n];
	if(s%2==0) h=s/2;
	else h=s/2+1;
	while(i<=h)
	{
		if(k>m[j])
		{
			j++;
			k=1;
		}
		if(f<1)
		{
			g--;
			f=m[g];
		}
		if(l[j]!=l[g]) c++;
		k++;
		f--;
		i++;
	}
	cout<<c<<'\n';
	return 0;
}