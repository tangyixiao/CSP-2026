#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
	freopen("and.in","r","in");
	freopen("and.out","w","out"); 
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	for(int i=n;i>1;i--)
	{
		if(a[i]>=a[i-1])swap(a[i],a[i-1]);
	}
	for(int i=2;i<=n;i++)
	{
		if(a[i]>=a[i-1])swap(a[i],a[i-1]);
	} 
	for(int i=2;i<=n;i++)
	{
		if(a[i]>=a[i-1])swap(a[i],a[i-1]);
	} 
	
	cout<<a[m];
	return 0;
}