#include<bits/stdc++.h>
using namespace std;
long long n,a,l,ans;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		l+=a;
		for(int j=1;j<=a;j++)
		{
			s+=c;
		}
	}
	long long le=0,r=l-1;
	while(le<=r)
	{
		if(s[le]!=s[r])ans++;
		r--;
		le++;
	}
	cout<<ans;
	return 0;
}
