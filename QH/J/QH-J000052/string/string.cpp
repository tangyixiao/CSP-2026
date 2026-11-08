#include <iostream>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,ans=0;
	string c,sum,num;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a >> c;
		for(int j=0;j<a;j++)
		{
			sum+=c; 
		}
	}
	for (int z=sum.size();z>=0;z--)
	{
		num+=sum[z];
	}
	for (int i=0;i<sum.size();i++)
	{
		for (int j=i;j<=i;j++)
		{
			if (sum[i]!=num[j])
			{
				sum[j]=sum[i];
				ans++;
			}
		}
	}
	cout << ans-1;
 } 
