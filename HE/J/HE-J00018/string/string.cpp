#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll l;
ll s;
ll k;
string c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string sum="";
	for(int i=1;i<=n;i++)
	{
		cin>>k>>c;
		int st=log2(k);
		char op=c[0];
		for(int i=1;i<=st;i++)
		{
			c+=c;
		}
		sum+=c;
		for(int i=1;i<=k-pow(2,st);i++)
		{
			sum+=op;
		}
	}
	sum=" "+sum;
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	for(int i=1;i<=(sum.length()-1)/2;i++)
	{
		if(sum[i]!=sum[sum.length()-i+1])
		{
			s++;
		}
	}
	cout<<s;
	return 0;
}
