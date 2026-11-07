#include<bits/stdc++.h>
using namespace std;
char b[1000005];
char a[100005];
long long f[100005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long sd=1,kl=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>f[i]>>a[i];
		kl+=f[i];
	}
	long long as=0,df=0;
    for(int i=1;i<=n;i++)
    {
    	df+=f[i];
    	for(int j=sd;j<=df;j++)
    	{
    		b[j]=a[i];
		}
    	sd+=f[i];
	}
	long long qa=1;
	while(qa!=kl-qa+1)
	{
		if(b[qa]!=b[kl-qa+1])
		{
			as++;
		}
		qa++;
	}
	cout<<as;
	return 0;
}
