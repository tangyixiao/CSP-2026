#include <bits/stdc++.h>
using namespace std;
int n,a,zs=0,x=0,y;
char b;
const int N=1e9+10;
string l;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			l=l+b;
		}
	}
	y=l.size()-1;
	while(x<y)
	{
	
		if(l[x]!=l[y])
		{
			
			zs++; 
		}
		x++,y--;
	}
	cout<<zs;
	return 0;
}