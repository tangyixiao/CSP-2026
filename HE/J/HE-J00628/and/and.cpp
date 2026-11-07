#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	int n,m,a[1234];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	cout<<a[0];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
