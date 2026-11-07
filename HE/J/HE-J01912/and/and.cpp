#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int nu[200082];
int nl,k,ans=-1;
string itoe(int n)
{
	string op="";
	while(n)
	{
		op=(char)((n%2)+'0')+op;
		n/=2;
	}
	return op;
}
int etoi(string n)
{
	int ns=0,power=1;
	for(int i=n.size()-1;i>=0;i--,power<<=1)
		ns+=(n[i]-'0')*power;
	return ns;
}
int awy(int x,int y)
{
	string xs=itoe(x),ys=itoe(y),as="";
	reverse(xs.begin(),xs.end());
	reverse(ys.begin(),ys.end());
	for(int i=0;i<min(xs.size(),ys.size());i++)
	{
		as+=((xs[i]-'0')&&(ys[i]-'0'))+'0';
	}
	reverse(as.begin(),as.end());
	return etoi(as);
}
void dfs(int idx,int w,int n)
{
	if(w==0)
	{
		for(int i=1;i<=nl;i++)
		dfs(i,1,nu[i]);
	}
	if(w==k)
	{
		ans=max(n,ans);
		return;
	}
	for(int i=idx+1;i<=nl+w-k+1;i++)
		dfs(i,w+1,awy(nu[i],n));
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>nl>>k;
	for(int i=1;i<=nl;i++)
	cin>>nu[i];
	dfs(0,0,0);
	cout<<ans;
//	int n,y;
//	cin>>n>>y;
//	cout<<itoe(n)<<'\n'<<itoe(y)<<'\n';
//	cout<<awy(n,y);
}
