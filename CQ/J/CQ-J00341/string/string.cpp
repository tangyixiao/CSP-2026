#include<bits/stdc++.h>
using namespace std;
int n;
string s;
const int N=2*1e5+1;
long long int a[N],z=0,ans=0;
char c[N]; 
bool j(int q)
{
	if(q%2==0) return false;
	else return true;
}
int gcd(int aaa,int bbb)
{
	if(aaa>bbb) 
	{
	gcd(aaa-bbb,bbb);
	}
	else if(aaa<bbb)
	{
		swap(aaa,bbb);
	gcd(aaa,bbb);
	}
	if(aaa==bbb) return bbb;
}
int my()
{
	int k;
	for(int i=1;i<n;i++) 
	{
	k=gcd(a[i],a[i+1]);	
	}
	return gcd(k,a[n]);//最大的公约数 
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	cin>>a[i]>>c[i];
	z+=a[i];
	}
long long int wlgl=my();
	z=z/wlgl;
	for(int i=1;i<=n;i++) a[i]/=wlgl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			s+=c[i];
		}
	}
	if(j(z))
	{
		int mid=(z/2);
		for(int i=1;i<=mid;i++)
	{
		if(s[mid+i]!=s[mid-i])
		{
			ans++;
		}
	}
	}
	else
	{
		int mmid=z/2;
		for(int i=0;i<mmid;i++)
		{
			if(s[mmid-i-1]!=s[mmid+i])
			ans++;
		}
	}
	cout<<ans*wlgl<<endl;
	return 0;
}
 
