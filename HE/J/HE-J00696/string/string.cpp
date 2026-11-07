//Trick||Treat!
#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+5;
long long n,a[N],l,r,cnt,ans;
char c[N];
int main()
{
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)cin>>a[i]>>c[i];
	l=1,r=n;
	while(l<r)
	{
		cnt+=a[l];
		while(cnt>=a[r]&&l<r)
		{
			if(c[l]!=c[r])ans+=a[r];
			cnt-=a[r--];
		}
		if(cnt)a[r]-=cnt,ans+=(c[l]==c[r]?0:cnt),cnt=0;
		l++;
	}
	cout<<ans;
	return 0;
}//8:58:20 AC 
