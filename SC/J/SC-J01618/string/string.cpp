#include<bits/stdc++.h>
using namespace std;
unsigned long long sum=0;
int n,a[200005];
char c[200005];
int main(){
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int i=1,j=n;
	while (i!=j)
	{
		if (a[i]>a[j])
		{
			if (c[i]!=c[j])
			{
			    sum+=a[j];
			}
			a[i]-=a[j];
			j--;
		}
		else if (a[i]<a[j])
		{
			if (c[i]!=c[j])
			{
				sum+=a[i];
			}
			a[j]-=a[i];
			i++;
		}
		else if (a[i]==a[j])
		{
			if (c[i]!=c[j])
			{
				sum+=a[j];
			}
			j--;
			i++;
			if (i==j+1)
			{
				i=j;
			}
		}
	}
	cout<<sum;
	return 0;
} 