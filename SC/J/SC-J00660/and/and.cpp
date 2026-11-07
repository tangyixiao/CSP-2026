#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans;
vector<int> a;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1,tmp;i<=n;i++)
		cin>>tmp,a.push_back(tmp);
	sort(a.begin(),a.end());
	for(auto i=a.begin();i+m-1<a.end();i++)
	{
		long long ad=*i;
		for(int j=1;j<m;j++)
			ad&=*(i+j);
		ans=max(ans,ad);
	}
	cout<<ans;
	return 0;
}