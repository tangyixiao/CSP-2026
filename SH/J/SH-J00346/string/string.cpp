#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
int n,a[N],b[N];
ll len,sum,ans;
char c[N],d[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	int id=1;
	for(int i=1;i<=n;i++)
	{
		sum+=a[i];
		if(sum>len/2&&sum-a[i]<=len/2)
		{
			int val1=len/2-sum+a[i],val2=sum-(len+1)/2;
			if(val1!=0) b[id]=val1,d[id++]=c[i];
			if(val2!=0) b[id]=val2,d[id]=c[i];
		}
		else b[id]=a[i],d[id]=c[i];
		id++;
	}
	int lft=1,rgt=id-1;
	while(lft<rgt)
	{
		if(b[lft]<b[rgt])
		{
			if(d[lft]!=d[rgt]) ans+=b[lft];
			b[rgt]-=b[lft++];
		}
		if(b[rgt]<b[lft])
		{
			if(d[lft]!=d[rgt]) ans+=b[rgt];
			b[lft]-=b[rgt--];
		}
		if(b[lft]==b[rgt])
		{
			if(d[lft]!=d[rgt]) ans+=b[lft];
			lft++,rgt--;
		}
	}
	cout<<ans;
	return 0;
}
