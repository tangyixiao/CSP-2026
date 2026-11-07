#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N];
string s,c[N];
long long ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)
		s+=c[i];
	}
	long long len=s.size();
	long long l=0,r=len-1;
	while (l<r)
	{
		if  (s[l]!=s[r])
		ans++;
		l++,r--;
	}
	cout<<ans;
	return 0;
}
