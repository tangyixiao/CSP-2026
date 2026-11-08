#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin); 
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	if(m==1)
	{
		sort(a,a+n+1);
		cout<<a[n];
		return 0;
	}
	sort(a,a+n+1);
	if(m==2)
{
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1]&&d<a[i])
		{
			d=a[i];
		}
	}
	if(d!=0)
	cout<<d;
	else
	cout<<a[n-1];
	return 0;
}
	cout<<a[n-2];
	
	fclose(stdin);
	fclose(stdout);
	return 0; 
	}
