#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int k[m+5];
	int max1=-1,max2=-1;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin >>a[i];
	}
	sort(a,a+1);
	for(int i=0;i<m;i++)
	{
		while(max1>0)
		{
			k[i]+=a[m-i]%2*w;
			w*=10;
			a[m-i]/=10;
		} 
	}
	while(num1>=0&&num2>=0)
	{
		if(num1%10==1&&num2%10==1)
		{
			ans+=r;
		}
		num1/=10;
		num2/=10;
		r*=2;
	}
	return 0;
}
