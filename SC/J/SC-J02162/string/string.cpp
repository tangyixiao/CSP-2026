#include<bits/stdc++.h>
using namespace std;
long long a[200005];
string c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		if(i>=2 && a[i]!=a[i-1])
			flag=1;
	} 
	if(flag==1)
	{
		string s;
		int len=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=len;j<=len+a[i]-1;j++)
				s[j]=c[i];
			len+=a[i];
		}
		string S;
		for(int i=1,j=n;i<=len/2,j>n/2;i++,j--)
			S[j]=s[i];
		int ans=0;
		for(int i=1;i<=len/2;i++)
			if(S[i]!=s[i])
				ans++;
		cout<<ans;	
	}
	else if(flag==0)
	{
		long long ans=0;
		for(int i=1,j=n;i<=n/2,j>n/2;i++,j--)
			if(c[i]!=c[j])
				ans+=a[i];
		cout<<ans;
	}
	return 0;
}