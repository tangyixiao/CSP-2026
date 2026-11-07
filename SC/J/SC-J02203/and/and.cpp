#include<bits/stdc++.h>
using namespace std;
long long m,n,a[100005];
int towc(int n)
{
	int cun=0,x=0,cot=0;
	while(n>0)
	{
		cot=n%2;
		n=n/2;
		for(int i=0;i<x;i++)
		{
			cot=cot*10;
		}
		cun+=cot;
		cot=0;
		x++;
	}
	return cun;
}

int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)cin>>a[i];
	sort(a+1,a+m+1);
	for(int i=1;i<=n;i++)
	{
		cout<<a[m-i]&&m[m-i+1];
	}
	
}