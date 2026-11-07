#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
pair<string,int> a[N];
string _10to2(int x)
{
	string s;
	while(x)
	{
		s+=char('0'+x%2);
		x/=2;
	}
	reverse(s.begin(),s.end());
	if(s.size()<=32) s.insert(0,32-s.size(),'0');
	return s;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	int n,m;
	cin>>n>>m;
	int mx=0;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i].second;
		mx=max(mx,a[i].second);
		a[i].first=_10to2(a[i].second);
	}
	sort(a+1,a+n+1,greater<pair<string,int>>());
	long long ans=a[1].second;
	if((1<<__lg(a[1].second))==a[1].second&&a[1].second==mx)
	{
		ans=a[2].second;
		for(int i=3;i<=m+1;++i) ans&=a[i].second;
	}
	else
	{
		for(int i=2;i<=m;++i) ans&=a[i].second;
	}
	cout<<ans;
	return 0;
}//70
