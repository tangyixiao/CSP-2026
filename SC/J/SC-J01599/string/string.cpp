#include<bits/stdc++.h>
using namespace std;
long long a1[200005],l,ans;
char a2[200005];
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a1[i]>>a2[i];
		l+=a1[i];
		for(int j=0;j<a1[i];j++)
			s=s+a2[i];
	}
	for(int i=1;i<=l/2;i++)
	{
		if(s[i-1]!=s[l-i])ans++;
	}
	cout<<ans;
	return 0;
}