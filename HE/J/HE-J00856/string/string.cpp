#include <bits/stdc++.h>
using namespace std;
long long n=0,d=0,e=0,f=0,g=0,z=0,h=0;
const long long N=1e8+10;
char c[N],m[N];
long long s[N];
int mian(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (long long i=1;i<=n;++i)
	{
		cin>>s[i];
		cin>>c[i];
		e=max(e,s[i]);
		if(c[i]=c[i-1])
		{
			f++;
		}
		
	}
	
	if(f==n/2)
	{
		cout<<0<<endl;
		return 0;
	}
	for (long long i=1;i<=n/2;i++)
	{
		if(s[i]==s[n-i+1]&&c[i]==c[n-i+1]){
		h++;
		if(h==n/2){
			cout<<0<<endl;
			return 0;
		}
	}
	}
	for(long long i=1;i<=n;++i)
	{
		for(long long j;j<s[i];j++)
		{
			d++;
			g++;
			m[j]=d;
		}
	}
	for(long long i=1;i<=n/2;++i)
	{
		if(m[i]!=m[g-i+1])
		{
			z++;
		}
	}
	cout<<z<<endl;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
