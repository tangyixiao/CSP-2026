#include<bits/stdc++.h>
const int N=2e5+10;
using namespace std;
int n, m, a[N], res;
map<int, int>m1;
map<int, string>m2;
vector<int>p, p1;//proper one
vector<int>ans;
long long all;
void nb(int x)
{
	string s=" ";
	int t=x;
	while(x)
	{
		if(x&1) s+='1';
		else s+='0';
		x/=2;
	}

	for(int i=s.size()-1; i>0; i--)
		if(s[i]=='1') m1[i]++;
	
//	string s1=" ";		s1+=s[i];
//	for(int i=1; i<=s.size(); i++)
	m2[t]=s;
}

void hb(int now)
{
	ans.push_back(now);
	for(int i=now+1; i>0; i--) m1[i]=0;
//	for(auto i : p) if(m2[i][m2[i].size()-now]=='1') p1.push_back(i);
	for(auto i : p) if(m2[i][now]=='1') p1.push_back(i);
	p.clear();
	for(auto i : p1)
	{
		for(int j=m2[i].size()-1; j>0; j--)
			if(m2[i][j]=='1') m1[j]++;
		p.push_back(i);
	}
//	for(auto i : p1) cout<<i<<" ";
	p1.clear();
	for(int i=now-1; i>0; i--) 
		if(m1[i]>=m){
			hb(i);
			break;
		}
}

int qpow(int x, int k)
{
	int res=1;
	while(k)
	{
		if(k&1) res*=x;
		x*=x;
		k/=2;
	}
	return res;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++)
		cin>>a[i], nb(a[i]), p.push_back(a[i]);
	for(int i=30; i>0; i--)	
		if(m1[i]>=m){
			hb(i);
			break;
		} 
	int res=0;
	for(auto i : ans) res+=qpow(2, i-1);
	cout<<res<<" ";
	return 0;
}
/*
4 2
3 12 12 15

5 3
31 3 1 15 7
*/
