#include<bits/stdc++.h>
using namespace std;
long long n,a,l,cnt,p=1;
char c,s[1000000005];
int main()
{
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		l+=a;
		for(int j=p;j<=l;j++)
		{
			s[j]=c;
		}
		p=l+1; 
	}
	for(int i=1;i<=l/2;i++)
	{
		if(s[i]!=s[l-i+1])
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
