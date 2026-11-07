#include<bits/stdc++.h>
using namespace std;
int m1[100005];
int n1[100005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,com=0,ans=0;
	char c;
	string s;
//	cin>>n;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(int j=1;j<=a;j++)
		{
			s=s+c;
		}
	}
	int cnt=s.size()-1;
	for(int i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s[cnt])
		{
			ans++;	
		}
		cnt--;
	}
	printf("%lld\n",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
