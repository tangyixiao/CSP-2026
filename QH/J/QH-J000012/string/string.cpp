#include <bits/stdc++.h>
using namespace std;
int n;
	int d=0;
	int e=0;
	int f=0;
int main()
{
	freopen("string.in","r",stdin); 
	freopen("string.out","w",stdout);
cin>>n;
int a[n+10];
	char b[n+10];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		d=d+a[i];
	}
	char c[d+10];
	for(int i=0;i<n;i++){
		for(int j=0;j<a[n];j++)
		{
			c[e]=b[i];
			e++;
		}
	}
	if(d%2==0){
		for(int i=0;i<d/2;i++)
		{
			if(c[i]!=c[d-i])
			{
				++f;
			} 
		}
	}
	else
	{
		for(int i=0;i<d/2;i++)
		{
			if(c[i]!=c[d-i-1])
			{
				++f;
			} 
		}
	}
	cout<<f;
	fclose(stdin);
	fclose(stdout); 
	return 0;
 } 
