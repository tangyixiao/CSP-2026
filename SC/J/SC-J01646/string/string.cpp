#include<bits/stdc++.h>
#define ll long long
#define pp pair<int,int>
const int N=2e5+1010; 
using namespace std;
int read()
{
	int x=0,f=1;
	char ch=getchar();
	while(ch>'9'||ch<'0')
	{
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9')
	{
		x=x*10+ch-48;
		ch=getchar();
	}
	return x*f;
}
ll n,a[N],l,r,ans;
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	l=1,r=n;
	while(l<r)
	{
		if(a[l]<a[r])
		{
			if(c[l]==c[r]) a[r]-=a[l],l++;
			else ans+=a[l],a[r]-=a[l],l++;
		}
		else
		{
			if(c[l]==c[r]) a[l]-=a[r],r--;
			else ans+=a[r],a[l]-=a[r],r--;
		}
	} 
	cout<<ans; 
	return 0;
}