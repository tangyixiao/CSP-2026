#include <bits/stdc++.h>
using namespace std;
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
int n,a,sum,t,q[100000000];
char b;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		for(int j=sum;j<a+sum;j++) q[j]=b-'a';
		sum+=a;
	}
	for(int i=0;i<sum/2;i++)
	{
		if(q[i]!=q[sum-i-1]) t++;
	}
	cout<<t;
}
