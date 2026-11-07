#include<bits/stdc++.h>
using namespace std;
char a[100005];
char x;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,xn,sum=0,k=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>xn>>x;
		for(int i=k;i<=xn-1+k;i++)
		{
			a[i]=x;
		} 
		k+=xn; 
	}	
	for(int i=0;i<k/2;i++)
	{
		if(a[i]!=a[k-1-i])
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
