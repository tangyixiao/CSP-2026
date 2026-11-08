#include<bits/stdc++.h>
using namespace std;
struct st
{
	long long ls;
	char c;
};
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	vector<int> v2;
//	v2.push_back(1);
//	v2.push_back(2);
//	v2.push_back(3);
//	v2.push_back(4);
//	v2.push_back(5);
//	v2.push_back(6);
//	v2.insert(v2.begin()+v2.size()-5-1,9);
//	for(int i=0;i<6;i++)
//	{
//		cout<<v2[i];
//	}
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	vector<st> v;
	int x;
	char y;
	cin>>x>>y;
	v.push_back({x,y});
	for(int i=1;i<n;i++)
	{
		cin>>x>>y;
		if(y==v[v.size()-1].c)
		{
			v[v.size()-1].ls+=x;
		}
		else
		{
			v.push_back({x,y});
		}
	}
//	for(int i=0;i<v.size();i++)
//	{
//		cerr<<v[i].ls<<' '<<v[i].c<<'\n';
//	}
//	for(int i=0;i<v.size();i++)
//	{
//		cerr<<v[v.size()-i-1].ls<<' '<<v[v.size()-i-1].c<<'\n';
//	}
	for(long long i=0;i<v.size()/2;i++)
	{
		if(v[i].ls>v[v.size()-i-1].ls)
		{
			v.insert(v.begin()+i+1,{v[i].ls-v[v.size()-i-1].ls,v[i].c});
			v[i].ls=v[v.size()-i-1].ls;
		}
		else if(v[i].ls<v[v.size()-i-1].ls)
		{
			v.insert(v.begin()+v.size()-i-1,{v[v.size()-i-1].ls-v[i].ls,v[v.size()-i-1].c});
			v[v.size()-i-1].ls=v[i].ls;
		}
	}
	long long ans=0;
//	for(int i=0;i<v.size();i++)
//	{
//		cerr<<v[i].ls<<' '<<v[i].c<<'\n';
//	}
//	for(int i=0;i<v.size();i++)
//	{
//		cerr<<v[v.size()-i-1].ls<<' '<<v[v.size()-i-1].c<<'\n';
//	}
	//cerr<<'\n';
	for(long long i=0;i<v.size()/2;i++)
	{
		//cerr<<ans<<'\n';
		//cerr<<v[i].ls<<' '<<v[i].c<<'\n'<<v[v.size()-i-1].ls<<' '<<v[v.size()-i-1].c<<'\n';
		if(v[i].c!=v[v.size()-i-1].c)
		{
			ans+=v[i].ls;
		}
	}
	cout<<ans;
	return 0;
}
