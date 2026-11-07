#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r","in");
	freopen("string.out","w","out");
	long long n,a[100005];
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{	
		long long b;
		cin>>b>>a[i];
		s+=a[i];
	}
	cout<<s;
	return 0;
}
