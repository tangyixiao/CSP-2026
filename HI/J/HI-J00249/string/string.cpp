#include<bits/stdc++.h>
using namespace std;
int a[2005];
int s[20005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>s[i];
		if(s[i]==s[i+1])
		{
			cout<<0;
			break;
		}
	}
	return 0;
}
