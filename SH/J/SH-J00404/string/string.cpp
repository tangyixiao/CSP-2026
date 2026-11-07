#include<bits/stdc++.h>
using namespace std;
struct node{
	long long l;
	string s;
};
node a[1000000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string b;
	for (int i=0;i<n;i++)
	{
		cin>>a[i].l>>a[i].s;
		b+=a[i].s;
	}
	string k=b;
	reverse(b.begin(),b.end());
	long long ans=0;
	for (int i=0;i<k.size();i++)
	{
		if (b[i]!=k[i])
		{
			ans+=a[i].l;
		}
	}
	if (ans%2==0)
	{
		cout<<ans/2;
	}
	else
	{
		cout<<ans/2+1;
	}
	return 0;
}
