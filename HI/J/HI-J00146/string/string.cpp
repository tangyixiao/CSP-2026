#include<bits/stdc++.h>
using namespace std;
int n,m,si=0,num=0;
char o;
string a;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	a=a+'1'; 
	for(int i=1;i<=n;i++)
	{
		cin>>m>>o;
		for(int i=1;i<=m;i++)
		{
			a+=o;
		}
	}
	si=a.size()-1;
	for(int i=1;i<=si/2;i++)
	{
		if(a[i]!=a[si-i+1]) num++;
	}
	cout<<num;
	return 0;
}
