#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	vector<int> a;
	unordered_map<int,char> mp;
	a.push_back(0);
	for(int i=1;i<=n;i++){
		int num;
		char s;
		cin>>num>>s;
		a.push_back(a.back()+num);
		mp.insert({a.back(),s});
	}
	int cnt=0;
	for(int i=1;i*2<=a.back();i++){
		auto st=lower_bound(a.begin(),a.end(),i);
		auto ed=lower_bound(a.begin(),a.end(),a.back()-i+1);
		auto f=mp[a[ed-a.begin()]];
		auto s=mp[a[st-a.begin()]];
		if(f!=s)cnt++;
	}
	cout<<cnt;
	return 0;
}