#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a[20010],n,b;
	cin>>n>>b;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[n-1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}

