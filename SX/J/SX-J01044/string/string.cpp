#include <bits/stdc++.h>
using namespace std;
#define int long long//注意数据范围
#define fr(i,a,b) for(int i=a;i<=b;i++)
int a[200005];
map <int,string> mp;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,len=0;
	cin>>n;
	string s;
	fr(i,1,n)
	{
		int x;cin>>x;
		len+=x;
		string ss;
		cin>>ss;
		fr(j,1,x)
			s+=ss;
	}
	int ans=0;
//	cout <<s;
	fr(i,0,(len-1)/2)
	{
		int j=len-i-1;
		if(s[i]!=s[j])
			ans++;
	}
	cout <<ans;
	return 0;
}
//rp++