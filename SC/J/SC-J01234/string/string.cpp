#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long ans,len;
int n;
int a[N],b[N];
char c[N],s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i]>>c[i];
		b[n-i+1]=a[i];
		s[n-i+1]=c[i];
		len+=a[i];
	}
	long long ln=(len+1)/2,l=1;
	for(int i=1,j=1;l<=ln;)
	{
		int x,f;
		if(a[i]>b[j])
		{
			x=b[j];
			a[i]-=b[j];
			f=1;
		}
		else if(a[i]<b[j])
		{
			x=a[i];
			b[j]-=a[i];
			f=-1;	
		}
		else
		{
			x=a[i];
			a[i]=b[j]=0;
			f=0;
		}
		if(c[i]!=s[j])
		{
			l+=x;
			ans+=x;
			if(f==1) j++;
			else if(f==-1) i++;
			else i++,j++;
		}
		else
		{
			l+=x;
			if(f==1) j++;
			else if(f==-1)	i++;
			else i++,j++;
		}
	}
	cout<<ans;
	return 0;
}