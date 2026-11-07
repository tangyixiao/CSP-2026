#include<bits/stdc++.h>
using namespace std;
string s;
long long n,p,ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		char c;
		cin>>x>>c;
		p+=x;
		for(int j=1;j<=x;j++)
		{
			s+=c;
		}
	}
	if(p%2==1)
	{
		int w=(p-1)/2;
		char a[s.size()+1],b[s.size()+1];
		for(int i=0;i<w;i++)
		{
			a[i]=s[i],b[i]=s[w+1-i];
			if(a[i]!=b[i]) ans++;
		}
	}
	else
	{
		int w=p/2;
		char a[s.size()+1],b[s.size()+1];
		for(int i=0;i<w;i++)
		{
			a[i]=s[i],b[i]=s[w+1-i];
			if(a[i]!=b[i]) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
