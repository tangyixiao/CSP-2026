#include<bits/stdc++.h>
using namespace std;
string a[1000005];
char c;
int n,b,m=0,s=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int j=1;j<=n;j++)
	{
	  cin>>b;
	  cin>>c;
	  for(int i=1;i<=b;i++)
	  {
	  	a[i]=c;
	  	cout<<a[i];
	  	s++;
	  }
	
	}
	cout<<s;
	for(int i=1;i<=s/2;i++)
	{
		if(a[i]!=a[s-i+1])
		{
			m=m+1;
		}
	}
	cout<<m;
return 0;
}

