#include<iostream>
#define int long long
using namespace std;
const int N=2e5+10;
int n,a[N],sum=0,ans;
string s=" ";
int cnt;
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		sum+=a[i];
		for(int j=1;j<=a[i];j++)
		{
			s=s+c[i];
		}
	}
	int len=s.size();
	for(int i=1;i<=len/2-1;i++)
	{
		if(s[i]!=s[len-i]) ans++;
	}
	cout<<ans;
	return 0;
}