#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	ll x;
	char c;
};
const int N=2e5+15;
ll f[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<node> a(n);
	for(int i=0;i<n;i++) cin>>a[i].x>>a[i].c;
	if(a.size()==1)
	{
		cout<<0;
		return 0;
	}
	ll gcd=a[0].x;
	for(int i=1;i<a.size();i++) gcd=__gcd(a[i].x,gcd);
	string s="";
	for(int i=0;i<a.size();i++)
	{
		ll V=a[i].x/gcd;
		while(V--) s+=a[i].c;
	}
	int u=ceil(s.size()*1.0/2.0);
	string t=s.substr(s.size()/2);
	string r=s.substr(0,u);
	memset(f,0,sizeof(f));
	for(int i=0;i<r.size();i++)
	{
		bool flag=true;
		int w=i+1;
		int k=0;
		for(int j=t.size()-1;j>=0;j--)
		{
			if(k==i)
			{
				if(s[i]==t[j]) flag=false;
				break;
			}
			k++;
		}
	 	if(flag) f[w]=f[w-1]+1;
		else f[w]=f[w-1];
	}
	cout<<f[u]*gcd;
	return 0;
}
