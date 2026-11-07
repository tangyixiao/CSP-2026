#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	int b[n];
	char zimu[100];
	for(long long i=1;i<=n;i++)
	{
		cin>>b[i]>>zimu[i];
	}
	for(long long i=1;i<=n;i++)
	{
		if(n>=3)
		{
			if(b[1]<b[2])
			{
				cout<<b[0];
				break;
			}
			if(b[1]>b[n])
			{
				if(b[1]==b[2])
				{
					cout<<b[1];
					break;
				}
				else
				{
					cout<<b[n]+b[n-1];
					break;
				}
			}
			if(b[1]==b[n])
			{
				cout<<b[i];
				break;
			}	
		}
		if(zimu[i]==zimu[i+1])
		{
			cout<<0;
			break;
		}
		if(n==2)
		{
			if(b[1]<b[2])
			{
				cout<<b[1];
				break;
			}
			else
			{
				cout<<b[n]<<endl;
				break;
			}
		}
		if(n==1)
		{
			cout<<0<<endl;
			break;
		}
	}
	return 0;
}
