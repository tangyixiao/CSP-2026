#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int n;
int a[N];
char c[N];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	if(n==1)
	{
		cout<<0;
	}
	else if(n==2)
	{
		if(c[1]==c[2])
			cout<<0;
		else
		{
			if((a[1]+a[2])%2==1)
				cout<<min(a[1],a[2]);
			else
			{
				if(a[1]==a[2])
					cout<<a[1];
				else
					cout<<min(a[1],a[2]);
			}
		}
	}
	else
		cout<<0;
	return 0;
}