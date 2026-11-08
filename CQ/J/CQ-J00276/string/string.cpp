#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200010];
char c[200010];
int t[200010];
string s;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int L=0;
	bool f=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>c[i];
		t[i]=t[i-1]+a[i];
		if(a[i]>50) f=1;
	//	cout<<t[i]<<endl;
		L+=a[i];
	}
//	cout<<L<<endl;
	if(n<=2000&&f==0)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=a[i];j++)
			{
				s=s+c[i];
			}
		}
		//cout<<s<<endl;
		int l=s.size();
	//	cout<<l;
		int sum=0;
		int mm=l/2;
		for(int i=0;i<mm;i++)
		{
			if(s[i]!=s[l-1-i])
			{
				sum++;
			//	cout<<s[i]<<" "<<s[l-1-i];
			 } 
			
		}
		cout<<sum;
	}
	else 
	{
		int sum=L/2;
	int sumi=0;
	for(int i=1;i<=n;i++)
	{
		if(t[i]>=sum&&sum>=t[i-1]+1) 
		{
			sumi=i;
			break;
		}
	}
	//cout<<sumi<<endl;
	sum=0;
	int l,r; 
	int l2,r2;
	int ans=0;
	for(int i=1;i<=sumi;i++)
	{
		l=sum+1;
		r=sum+a[i];
	//	cout<<l<<" "<<r<<endl;
		char c1=c[i];
		sum+=a[i];
		l2=L+1-l;
		r2=L+1-r;
		int li=-1;
		int ri=-1;
	//	cout<<l2<<" "<<r2<<endl;
		for(int j=sumi;j<=n;j++)
		{
			if(t[j]>=l2&&l2>=t[j-1]+1) 
			{
				li=j;
				break;
			}
		}
	//	if(li==-1) li=n;
		for(int j=sumi;j<=n;j++)
		{
			if(t[j]>=r2&&r2>=t[j-1]+1) 
			{
				ri=j;
				break;
			}
		}
	//	if(ri==-1) ri=n;
	//	cout<<li<<" "<<ri<<endl;
		if(li==ri)
		{
			if(c[i]!=c[li]) ans+=(r-l+1);
		}
		else
		{
			if(c[i]!=c[li]) ans+=(l2-t[li-1]);
			//out<< l2-t[li-1]+1+1;
			if(c[i]!=c[ri]) ans+=(t[ri]-r2+1);
		}
	}
	
	cout<<ans;
	}
	
	return 0;
 }

