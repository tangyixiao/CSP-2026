#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

struct stu
{
	int num;
	char x;	
};
stu a[200005];
string b,c;
int main()
{
	freopen("string1.in","r",stdin);
	freopen("string1.out","w",stdout);
	int n,zs=0;
	cin>>n;
	bool l=0;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i].num>>a[i].x;
		for (int j=1;j<=a[i].num;j++)
		{
			b+=a[i].x;
		 } 
	}
	for (int i=0;i<b.length();i++)
	{
		c[i]=b[b.length()-1-i];
	}
	if (n==1)
	{
		cout<<0;
		return 0;
	}
	if (n==2 && a[1].x!=a[2].x)
	{
		cout<<min(a[1].num,a[2].num);
		return 0;
	}
	else if (n==2 && a[1].x==a[2].x)
	{
		cout<<0;
		return 0;
	}
	int ans=0;
	for (int i=0;i<b.length();i++)
	{
		if (b[i]!=c[i])
		{
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
}
