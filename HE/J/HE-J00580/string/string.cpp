#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
long long sum;
struct f
{
	long long a;
	char b;
}l[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>l[i].a>>l[i].b;
	}
	for(int i=1;i<n;)
	{
		if(l[i].b!=l[n].b)
		{
			sum+=min(l[i].a,l[n].a);
		}
		l[i].a-=min(l[i].a,l[n].a);
		if(l[i].a==0)
		{
			i++;
		}
		l[n].a-=min(l[i].a,l[n].a);
		if(l[n].a==0)
		{
			n--;
		}
	}
	cout<<sum;
	return 0;
}
