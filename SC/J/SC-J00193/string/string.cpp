#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s,a;
	int n,L,ans=0;
	for(int i=1;i<n;i++)
	{
		cin>>s[i]>>a[i]>>L;
		s.insert(L,L+s[i],a[i]);
		L+=s[i];
		for(int j=1;j<s[i];j++)
		{
			s[L+1]=a[i];
			L++;
		}
	}
	for(int i=1;i<L;i++)
	{
		if(s[i]!=s[L-1])
		{
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}