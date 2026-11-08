#include<bits/stdc++.h>
using namespace std;
const long long NN=505;
char a[NN];
long long ans,n,l,cnt;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long t;
		cin>>t;
		l+=t;
		char ch;
		cin>>ch;
		for(int j=1;j<=t;j++)
		{
			a[j+cnt]=ch;
		}
		cnt+=t;
	}
	for(int i=1;i<=l/2;i++)
	{
		if(a[i]!=a[l-i+1])
		{
			ans++;
		}
	}
	cout<<ans;
}

