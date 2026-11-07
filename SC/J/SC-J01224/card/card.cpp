#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b,m[100005],o[100005]={},n,l,e=0;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
	cin>>m[i];
	n=0;
	for(int t=i-1;t>=1;t--)
	if(m[t]==m[i]&&m[t]!=0)
	{
	n=1;
	l=t;
	}
	if(n==1)
	for(int t=l;t<i;t++)m[t]=0;
	for(int t=1;t<=b;t++)
	{
	for(int y=1;y<=i;y++)
	{
		if(m[y]==t)
		{
		o[t]++;
		break;	
		}
		
		}	
	}
	}
	for(int i=1;i<=b;i++)
	cout<<o[i]<<" ";
	return 0;
}