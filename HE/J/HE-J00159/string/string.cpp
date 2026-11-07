#include<bits/stdc++.h>
using namespace std;
string a;
long long n,c,m;
char d;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m>>d;
		for(int j=0;j<m;j++)
		a+=d;
	}

	long long s;
	s=a.size();

	for(int i=0;i<s/2;i++){
		if(a[i]!=a[s-i-1])
			c++;
	}
cout<<c;

	return 0;
 } 
