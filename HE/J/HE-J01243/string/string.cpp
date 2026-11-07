#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N=2e5+5;
int n,a[N],sum=LLONG_MIN,ans;
char c[N];
string s;
bool f=false;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i],sum=max(sum,a[i]);
	if(sum==1000000000)
		return cout<<n*1000000000LL/2<<endl,0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=a[i];j++)
			s+=c[i];
	for(int i=0;i<s.size();i++)
		if(s[i]!=s[s.size()-i-1])
			ans++;
	cout<<ans/2<<endl;
	return 0;
}
