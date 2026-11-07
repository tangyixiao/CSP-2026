#include <bits/stdc++.h>
using namespace std;
long long b[100001],ad=1,ans=0;
char c[100001];
int main()
{	
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
	long long a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		cin>>b[i]>>c[i];
	}
	for(int i=1;i<=a%2+a/2;i++)
	{
		long long i1=a;
			if(c[i]==c[i1]&&b[i]==b[i1])
			{
				ans=ans;
			}
			else if(c[i]!=c[i1]&&b[i]==b[i1])
			{
				ans=ans+b[i];
				
				
			}
			else if(c[i]!=c[i1]&&b[i]>=b[i1]&&c[i]==c[i1-1])
			{
				ans=ans+b[i1];
				
			}
			else if(c[i]!=c[i1]&&b[i]<=b[i1]&&c[i1]==c[i+1])
			{
				ans=ans+b[i];
				
				
			}
			else if(c[i]!=c[i1]&&b[i]<b[i1]&&c[i1]!=c[i+1])
			{
				ans=ans+b[i1];
				b[i+1]=b[i+1]-i1+i;
				
			}
			else if(c[i]!=c[i1]&&b[i]<b[i1]&&c[i1]!=c[i+1])
			{
				ans=ans+b[i1];
				b[i+1]=b[i+1]-i1+i;
				
			}
			else if(c[i]!=c[i1]&&b[i]>b[i1]&&c[i]!=c[i1-1])
			{
				ans=ans+b[i];
				b[i1-1]=b[i1-1]-i1+i;
				
			}
		i1--;
	}
	cout<<ans;
	return 0; 
}
//Trick||Treat!
/*
for(int i1=ad;i1<=ad+b;i1++)
		{
			s[i1]=c[i];
		}
		ad=ad+b[i];
*/

