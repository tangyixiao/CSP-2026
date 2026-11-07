#include<bits/stdc++.h>
using namespace std;
string s;
int n;
long long check(string s)
{
	long long ans=0,l=0,r=s.size();
	r--;
	while(l<=r)
	{
		if(s[l]!=s[r])ans++;
		l++,r--;
	}
	return ans;
}
int main() 
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long a;char ch;
		cin>>a>>ch;
		for(long long j=1;j<=a;j++)
		s+=ch;
	}
	cout<<check(s);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
