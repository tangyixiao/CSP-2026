#include <bits/stdc++.h>
using namespace std;
const int N=1e5*2+10;
char c[N],c1[N];
string s1,s2;
unsigned long long n,a[N],ans=0,a1[N];
unsigned long long s=0,ma=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int k=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1])
		{
			a1[k]=a[i]+a[i-1];
//			c1[k]=c1[k-1];
		}
		else
		{
//			c1[k]=c[i];
			a1[k]=a[i];
			k++;
		}
		s+=a[i];
	}
	if(k==1)
	{
		cout<<0;
	}
	else if(s%2==0)
	{
		ans=0;
		for(int i=1;i<=k;i++)
		{
			ans+=a1[i];
			if(ans>=s/2) 
			{
				break;
			}
		}
		cout<<s-ans;
	}
	else if(s%2!=0)
	{
		ans=0;
		unsigned long long x=0;
		for(int i=1;i<=k;i++)
		{
			ans+=a1[i];
			if(ans>=s/2+1) 
			{
				x=ans-a1[i];
				break;
			}
		}
		if(x+1==s/2+1)
		{
			cout<<s-ans+1;
		}
		else
		{
			cout<<s-ans;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
