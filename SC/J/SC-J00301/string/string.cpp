#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int x[n+1];
	char y[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	long m=0;
	if(n%2==0)
	{
	for(int i=0;i<n;i++)
	{
		if(x[i]!=x[i+1])m=x[i]+x[i]-1;
	}
    }
    cout<<m;
	return 0;
}