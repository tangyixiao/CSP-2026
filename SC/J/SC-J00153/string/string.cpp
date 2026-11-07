#include <bits/stdc++.h>
using namespace std;
int n;
string s="";
long long ans=0LL;
long long a[200005];
char b[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=b[i];
		}
	}
	cout<<s<<endl;
	long long l=0LL,r=s.size()-1;
	while(l<=r)
	{
		if(s[l]!=s[r]) ans++;
		l++,r--;
	}
	cout<<ans;
	return 0;
}