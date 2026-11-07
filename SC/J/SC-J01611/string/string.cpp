#include<bits/stdc++.h>
using namespace std;
long long n,a[99999],sum,tt;
char c[99999];
void qp(int x)
{
	int nn=n;
	while(nn!=x)
	{
		a[nn+1]=a[nn];
		c[nn+1]=a[nn];
		nn--;
	}
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i]; 
	}
	tt=n/2+1;
	for(int i=1;i<tt;i++){
		if(c[i]!=c[n-i+1])
		{
			sum+=a[i];
		    if(a[i]>a[n-i+1])
			{
				qp(n-i+1);
				a[n-i+1]=a[i]-a[n-i+1];
				c[n-i+1]=c[i];
			} 
		}
    }
	cout<<sum;
	return 0;
}