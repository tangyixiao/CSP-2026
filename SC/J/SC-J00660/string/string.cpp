#include<bits/stdc++.h>
#include<deque>
using namespace std;
int n,tmp1;
char tmp2;
long long ans;
deque<pair<int,char> > dq;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp1>>tmp2;
		dq.push_back({tmp1,tmp2});
	}
	while(dq.size()>1)
	{
		auto f=dq.front(),b=dq.back();
		dq.pop_front();dq.pop_back();
		if(f.second!=b.second)ans+=min(f.first,b.first);
		if(f.first>b.first)
			dq.push_front({f.first-b.first,f.second});
		if(f.first<b.first)
			dq.push_back({b.first-f.first,b.second}); 
	}
	cout<<ans;
	return 0;
}