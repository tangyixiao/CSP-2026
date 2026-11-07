#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char b[200005];
int c[200005];
char d[1000000005];
int sum,top = 1,tep;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		sum+=a[i];
//		cout<<sum<<endl;
//		cout<<a[i]<<' '<<b[i]<<endl;
		c[b[i]-'a'+1]+=a[i];
//		cout<<'c'<<'['<<b[i]-'a'+1<<']'<<"ÊÇ"<<c[b[i]-'a'+1]<<endl;
		for(int j = 1;j<=a[i];j++)
		{
			d[top] = b[i];
//			cout<<d[top]<<endl;
			top++;
//			cout<<top<<endl;
		}
//		cout<<c[b[i]-'a']<<endl;
	}
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	for(int i = 1;i<=n;i++)
	{
		if(c[i]==sum)
		{
			cout<<0;
			return 0;
		}
	}
	for(int i = 1;i<=top-1;i++)
	{
		if(i==top-1)
		{
			break;
		}
		if(d[i]!=d[top-1])
		{
			d[top-1] = d[i];
			tep++;
		}
		else
		{
			continue;
		}
		top--;
	}
	cout<<tep;
	return 0;
}
