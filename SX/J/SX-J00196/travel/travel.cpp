#include<bits/stdc++.h>
using namespace std;
long long x,r;
string xzw,rzw;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>xzw>>r>>rzw;
	if(x==r)
		cout<<1;
	else
		cout<<0;
	if(xzw[0]==rzw[0]&&xzw[1]==rzw[1])
		cout<<1;
	else
		cout<<0;
	if((xzw[2]<='C'&&rzw[2]<='C')||(xzw[2]>='D'&&rzw[2]>='D'))
		cout<<1;
	else
		cout<<0;
	if((xzw[2]-rzw[2])*(xzw[2]-rzw[2])==1&&(xzw[2]!='C'&&rzw[2]!='D')&&(xzw[2]!='D'&&rzw[2]!='C'))
		cout<<1;
	else
		cout<<0;
}