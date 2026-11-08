#include<bits/stdc++.h>
using namespace std;
int n;
string s;
long long ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long x;
		char a;
		cin>>x>>a;
		while(x--) s+=a;
	}
	for(int i=0,j=s.size()-1;i<j;i++,j--)
		if(s[i]!=s[j])
			ans++;
	cout<<ans;
	return 0;
}
