#include<bits/stdc++.h>
using namespace std;
const long long N = 2e5+91;
long long n;
long long a[N];
char c[N];
long long aans=1;
char s[N],s1[N];
//inline bool hui()
//{
////	for(long long i=aans,j=1;i>=1;i--,j++)
////	{
////		s1[j] = s[i];
////	}
////	for(long long i=1;i<=aans;i++)
////	{
////		if(s1[i]!=s[i])
////		return 0;
////	}
////	return 1;
//return 1;
//}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
    	cin>>a[i]>>c[i];
    	for(long long j=1;j<=a[i];j++)
    	{
    		s[aans]=c[i];
    		aans++;
		}
	}
	bool flag=1;
	for(int i=2;i<=n;i++)
	{
		if(c[i]!=c[i-1])
	{
	flag=0;
	break;
		}	
	}
	if(flag==1)
	{
		cout<<0<<'\n';
		return 0;
	}
//	for(long long i=1;i<=aans;i++)
//	cout<<s[i];
	long long ans = 0;
//    if(hui())
//    {
//    	cout << ans <<'\n';
//    	return 0;
//	}
	if(aans%2==0)
	{
		long long l1,r1,l2,r2;
		l1=1;
		r1=l1+(aans/2)-1;
		l2=r1+1;
		r2=aans;
		for(long long i=r1,j=l2;i>=l1,j<=r2;i--,j++)
		{
			if(s[i]!=s[j])
			ans++;
		}
	}
	if(aans%2!=0)
	{
		long long l1,r1,l2,r2;
		long long mid=(aans/2)+1;
		l1=1;
		r1=mid-1;
		l2=mid+1;
		r2=aans;
		for(long long i=r1,j=l2;i>=l1,j<=l2;i--,j++)
		{
			if(s[i]!=s[j])
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
