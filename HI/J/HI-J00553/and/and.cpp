#include <bits/stdc++.h>
using namespace std;
int s[101000];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n = 0,l = 0;
	cin>>n>>l;
	for(int i = 0;i<n;i++)
	{
		cin>>s[i];
	}
	cout<<s[n-1];
	return 0;
}
