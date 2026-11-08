#include <bits/stdc++.h>
using namespace std;
long long a[200010],b[200010];
char s[200010];
int n;
long long sum=0;
long long get(long long x)
{
	long long d=lower_bound(b+1,b+n+1,x)-b;
	return d;
}
long long real(long long r)
{
	return sum-r+1;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d %c",&a[i],&s[i]);
		b[i]=b[i-1]+a[i];
		sum+=a[i];
		if(s[i]==s[i-1])
		{
			a[i-1]+=a[i];
			i--;
			n--;
		}
	}
//	for(int i=1;i<=n;i++)
//	{
//		cout<<b[i]<<' ';
//	}//
//	cout<<'\n';
	long long l=1,r=1,ret=0;
	while(l<=real(r))
	{
		int lo=l;
		int ro=r;
//		cout<<"l r:"<<get(lo) <<' '<<get(real(ro))<<'\n';
		l+=min(a[get(lo)], a[get(real(ro))]);
		r+=min(a[get(lo)], a[get(real(ro))]);
		
//		cout<<"s:"<<s[get(lo)] <<' '<<s[get(real(ro))]<<'\n';
		if(s[get(lo)]!=s[get(real(ro))])
		{
			ret+=min(a[get(lo)], a[get(real(ro))]);
//			cout<<"ret:"<<ret<<'\n';
		}
		
		a[get(lo)]-=min(a[get(lo)], a[get(real(ro))]);
		a[get(real(ro))]-=min(a[get(lo)], a[get(real(ro))]);
		
	}
	cout<<ret;
	return 0;
}
