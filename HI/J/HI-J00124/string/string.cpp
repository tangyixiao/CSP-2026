#include<bits/stdc++.h>
using namespace std;
string s;
char c[10];
long long n,m,x=1,y,z;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m>>c[i];
		for(long long j=1;j<=m;j++)
		{
			s=s+c;
		}
		if(c[i]!=c[1])
		{
			x=0;
			y=y+m;
		}
		z=z+m;
	}
	if(x==1)
	{
		cout<<0;
	}
	if(y>n/2)
	{
		cout<<z-y;
		return 0;
	}
	cout<<y;
	return 0;
}
