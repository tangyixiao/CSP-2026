#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool pd(string& s)
{
	int left=0,right=s.size()-1;
	while(left<=right)
	{
		if(s[left]!=s[right])
		{
			return false;
		}
		left++;right--;
	}
	return true;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll n;cin>>n;
	string s;
	vector<int> v;
	for(ll i=0;i<n;i++)
	{
		char c;int x;cin>>x>>c;
		for(int j=0;j<x;j++) s+=c;
	}
	//льеп
	bool f=false;
	for(int i=0;i<s.size()-2;i++)
	{
		if(s[i]!=s[i+1]) f=true;
	}
	if(f==false)
	{
		cout<<0;
		return 0;
	}
	if(pd(s)) cout<<0;
	return 0;
}
