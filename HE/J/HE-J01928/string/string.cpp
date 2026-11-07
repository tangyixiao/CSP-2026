#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],s;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	 } 
	for(int i=1,j=n;i<j;)
	{
		if(c[i]==c[j])
		{
			if(a[i]>a[j])
			{
				a[i]-=a[j];
				j--;
			}
			else if(a[i]<a[j])
			{
				a[j]-=a[i];
				i++;
			}
			else
			{
				i++;
				j--;
			}
		}
		else
		{
			if(a[i]>a[j])
			{
				a[i]-=a[j];
				s+=a[j];
				j--;
			}
			else if(a[i]<a[j])
			{
				a[j]-=a[i];
				s+=a[i];
				i++;
			}
			else
			{
				s+=a[i];
				i++;
				j--;
			}
		}
	}
	cout<<s;
	return 0;
	//½â×¢ÊÍ 
}
