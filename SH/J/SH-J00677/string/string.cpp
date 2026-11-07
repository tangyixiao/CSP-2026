#include<bits/stdc++.h>
using namespace std;
struct chh
{
	long long num;
	char zf;
};
vector<chh> a;
int main()
{
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	a.push_back({0,'a'});
	for(long long i=1;i<=n;i++)
	{
		long long d;
		char f;
		cin>>d>>f;
		a.push_back({d,f});
	}
	long long l=1,r=n,res=0;
	while(l<r)
	{
		long long sum1=a[l].num,sum2=a[r].num;
		char zf1=a[l].zf,zf2=a[r].zf;
		if(zf1!=zf2)
		{
			if(sum1==sum2)
			{
				res+=sum1;
				l++;
				r--;
			}
			else if(sum1>sum2)
			{
				res+=sum2;
				a[l].num-=sum2;
				r--;
			}
			else
			{
				res+=sum1;
				a[r].num-=sum1;
				l++;
			}
		}
		else
		{
			if(sum1==sum2)
			{
				l++;
				r--;
			}
			else if(sum1>sum2)
			{
				a[l].num-=sum2;
				r--;
			}
			else
			{
				a[r].num-=sum1;
				l++;
			}
		}
	}
	cout<<res;
	
	return 0;
 } 
