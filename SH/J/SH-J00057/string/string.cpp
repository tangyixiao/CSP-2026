#include<iostream>
using namespace std;
struct str
{
	long long num;
	char c;
};
int n;
str a[200010];
long long ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].num>>a[i].c;
	}
	int l=1,r=n;
	while(l<=r)
	{
		if(a[l].num<=0)
		{
			l++;
		}
		if(a[r].num<=0)
		{
			r--;
		}
		int x=min(a[l].num,a[r].num);
		a[l].num-=x;
		a[r].num-=x;
		if(a[l].c!=a[r].c)
		{
			ans+=x;
		}
	}
	cout<<ans<<endl;
	return 0;
} 
