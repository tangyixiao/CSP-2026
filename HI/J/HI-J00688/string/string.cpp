#include<bits/stdc++.h>
using namespace std;
long long n,a,ans=0;
char c;
string s,q;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		ans+=a;
		for(int i=1;i<=a;i++)
		{
			s+=c;
		}
	}
	q=s;
	reverse(s.begin(),s.end());	
	if(q==s)
	{
		cout<<0;
	}
	else 
	{
		cout<<ans/2;
	}
	return 0;
}
