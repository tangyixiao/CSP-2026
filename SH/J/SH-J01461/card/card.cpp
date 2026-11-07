#include<bits/stdc++.h>
using namespace std; 
int nx=0;    
int play(int n[],int m[],int nn,int mn)
{
	for(int i=1;i<=nn;i++)
	{
		nx=nn+mn;	 
	}
	return nx;
}
int main()
{
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n[500010],m[300010],nn,mn;
	cin>>nn>>mn;
	for(int i=1;i<=nn;i++) cin>>m[i];
	play(n,m,nn,mn);
	cout<<nx;
	return 0;
} 
