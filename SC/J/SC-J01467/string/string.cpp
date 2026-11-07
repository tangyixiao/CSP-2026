#include<bits/stdc++.h>
using namespace std;
char a[1000005],b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m,t=0,g=0;
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m>>b;
		for(int x=t+1;x<=t+m;x++)
		{
			a[x]=b;
		}
		t+=m;
	}
	for(int i=1,y=t;i<=t/2,y>t/2;i++,y--)
	{
		if(a[i]!=a[y])
		{
			g++;
		}
	}
	cout<<g;
	return 0;
}