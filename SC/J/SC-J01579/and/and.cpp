#include <bits/stdc++.h>
using namespace std;
int main()
{
	//第三题 
	freopen("and.in","r","stdin");
	freopen("and.out","w","stdout");
	int n,m,max1=-1,max2=-1,maxi=-1;
	cin>>n>>m;
	int zuida=-1;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//kk
	if(m==1)
	{
		for(int i=0;i<n;i++)
		{
			zuida=max(zuida,a[i]);
		}
		cout<<zuida;
	}
	else if(m==2)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				zuida=max(zuida,(a[i]&a[j]));
				
			} 
		}
		cout<<zuida;
	}
	else 
	{
		sort(a,a+n);
		int nei=a[n-1];
		for(int i=n-1-1;i>n-1-m;i--)
		{
			nei=(nei&a[i]);
		}
		cout<<nei;
	}
	return 0;	
} 