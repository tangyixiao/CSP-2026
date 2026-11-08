#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int l,n=0,m=0;
	cin>>l;
	long long a[l];
	char b[l];
	string  x,y;
	for(int i=0;i<l;i++)
	{
		cin>>a[i]>>b[i];
		for(int j=0;j<a[i];j++)
		{
			x=x+b[i];
			n++;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		y=y+x[i];
	}
	if(y==x)
	{
		cout<<m;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if(y[i]!=x[i])
		{
			y[i]=x[i];
			for(int j=n-i-1;j>n-i-2;j--)
			{
				x[j]=x[i];
			}
			m++;
		 } 
	}
	cout<<m;
	return 0;
} 
