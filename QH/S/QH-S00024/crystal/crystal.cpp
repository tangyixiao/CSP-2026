#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
long long n,m;
long long a[500005],ans=1,sum;
bool cmp(long long a,long long b) 
{
	return a>=b; 
}
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	long long l=1;
	for(int i=1;i<=n-1;i++)
	{
		for(int j=i+1;j<=n;j++)
		{	
			if(sum>=m)
			{
				l--;
				break;
			}
			else
			{
				sum+=(a[i]-a[j]);
				l++;
			}
			
		}
		ans=max(ans,l);
		l=1;
		sum=0;
	}
	cout<<ans<<endl;
	return 0;
}
