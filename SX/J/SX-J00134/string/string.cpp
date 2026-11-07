#include<bits/stdc++.h>
using namespace std;
int a[10000];
char b[10000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[0];cin>>b[0];
	}
	bool q=0;
	for(int i=0;i<n-1;i++)
	{
		if(b[i]!=b[i+1]) q=1;
	}
	if(q==0) cout<<0;
	return 0;
}