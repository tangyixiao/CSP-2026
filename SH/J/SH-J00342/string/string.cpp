#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,tot,a[200005],s[200005];
char c[200005];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1)
	{
		cin>>a[1]>>c[1];
		cout<<0<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		tot+=a[i];
		s[i]=s[i-1]+a[i];
	}
	int mid1,mid2,ans=0;
	if(tot%2==1)
		mid1=mid2=tot/2+1;
	else 
		mid1=tot/2,mid2=tot/2+1;
	int l=1,r=n,dl=0,dr=tot+1;//²î·ÖÖ¸Õë 
	int nowl=a[1],nowr=a[n];
	while(1)
	{
		int now=min(nowl,nowr);
		dl+=now,dr-=now;
		nowl-=now,nowr-=now;
		if(nowl==0)
		{
			l++;
			nowl+=a[l];
		}
		if(nowr==0)
		{
			r--;
			nowr+=a[r];
		}
		int L=lower_bound(s+1,s+n+1,dl)-s;
		int R=lower_bound(s+1,s+n+1,dr)-s;
		if(dl>=dr) break;
		if(c[L]!=c[R])
			ans+=now;
	}
	cout<<ans<<endl;
	return 0;
}

