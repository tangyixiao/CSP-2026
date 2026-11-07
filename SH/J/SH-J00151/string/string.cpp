#include <bits/stdc++.h>
using namespace std;
long long n,l,a[100010],i,j,k,tot;
char c[100010];
int main()
{
	freopen("string.in","/r",stdin);
	freopen("string.out","/w",stdout);
	cin>>n;
	for(i=0;i<n;++i)
	{
		cin>>a[l]>>c[l];
		if(c[l]!=c[l-1])
		{
			++l;
		}
		else
		{
			a[l-1]+=a[l];
		}
	}
//	cout<<"l="<<l<<endl;
	for(i=0;i<l/2;++i)
	{
		if(a[i]!=a[l-1-i] and c[i]==c[l-1-i])
		{
			long long b=max(a[i],a[l-1-i])-min(a[i],a[l-1-i]);
			tot+=b;
			a[i+1]+=b;
		}
		else if(c[i]!=c[l-1-i])
		{
			long long b=max(a[i],a[l-1-i])-min(a[i],a[l-1-i]);
			tot+=max(a[i],a[l-1-i]);
//			cout<<min(a[i],a[l-1-i])<<endl;
			a[i+1]+=b;
		}
	}
	cout<<tot;
	return 0;
}
