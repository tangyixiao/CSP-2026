#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	char c;
	int n,a;
	long long ans=0;
	size_t len,size;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		while(a--)
		{
			s+=c;
		}
	}
	size=s.length();
	len=size/2;
	size--;
	for(int i=0;i<len;i++)
	{
		ans+=(s[i]!=s[size]);
	}
	printf("%d",ans);
	return 0;
}
