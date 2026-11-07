#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath> 
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int i,a[n],sum=0,ma=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum++;
		ma=max(a[i],ma);
	}
	sort(&a[0],&a[0]+n);//ÉýÐò 
	/*int q[31],l=30;
	for(i=n-1;i>=0;i++)
	{
		if(a[i]>=pow(2,l))q[l]++;
		else if(l>0) l--;
	}
	for(;;)
	{
		if(q[l]>=m)
		{
			bool c=false;
			int ans=a[n-1];
			for(i=n-2;i>=n-m;i--)
			{
				ans=ans&a[i];
				c=true;
			}
			if(c==true)
			{
				cout<<ans;
				break;
			}
		}
		else
		{
			for(int j=n-1;j>=n-q[l];j--)a[j]/=2;
			sort(&a[0],&a[0]+n);
			q[l-1]+=a[l];
		}
	}*/
	int ans=a[n-1];
	for(i=n-2;i>=n-m;i--)
	{
		ans=ans&a[i];
	}
	cout<<ans;
	return 0; 
}
