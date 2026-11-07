#include<bits/stdc++.h>
#define fre(x) freopen(x".in","r",stdin);freopen(x".out","w",stdout)
using uit = unsigned int;


using namespace std;
vector<uit> get(vector<uit> v,int x)
{
	vector<uit> ret;
	for(int i = 0;i < v.size();i++)
	{
		if((v[i] >> x) & 1) ret.push_back(v[i]);
	}
	return ret;
}
int main()
{
	fre("and");
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >> n >> m;
	vector<uit> v(n);
	for(int i = 0;i < n;i++)
	{
		cin >> v[i];
	}
	uit cnt = 0;
	for(int i = 30;i >= 0;i--)
	{
		vector<uit> u = get(v,i);
		if(u.size() < m) continue;
		v = u;
		cnt += 1 << i;
	}
	cout << cnt;
	return 0;
}