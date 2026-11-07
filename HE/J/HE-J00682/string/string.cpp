#include<bits/stdc++.h>
using namespace std;
string s="";
long long n,a;
char c;
long long qp(string a)
{
	int l=0;int r=a.size()-1,cnt=0;
	while(l<=r)
	{
		if(a[l]!=a[r]) cnt++;
		l++;r--;
	}
	return cnt;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		string d(a,c);
		s+=d;
	}
	cout<<qp(s);
	return 0;
}
