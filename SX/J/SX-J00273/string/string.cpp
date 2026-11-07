#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a,sum,num;
string s,l,k;
char c;
map<ll,ll> t;
bool hui(string r)
{
	string l=r;
	reverse(r.begin(),r.end());
	return l==r;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		cin>>c;
		for(int j=0;j<a;j++)
		{
			s+=c;
		}
		num+=a;
	}
	if(hui(s)==1)
	{
		cout<<0;
		return 0;
	}
	l=s.substr(0,s.size()/2);
	if(num%2==0)
		k=s.substr(s.size()/2);
	else
		k=s.substr(s.size()/2+1);
	reverse(k.begin(),k.end());
	for(int i=0;i<k.size();i++)
	{
		if(l[i]!=k[i])
			sum++;
	}
	cout<<sum;
	return 0;
}
