#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	freopen("r","and.in",stdin);
	freopen("w","and.out",stdout);
	int n,b,ans,c=0;
	cin>>n>>b;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[n-b];
	return 0;
}