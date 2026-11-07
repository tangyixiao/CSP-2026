#include<bits/stdc++.h>
using namespace std;
char a[5],b[5];
int c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c;
	for(int i=0;i<3;i++)
		cin>>a[i];
	cin>>d;
	for(int i=0;i<3;i++)
		cin>>b[i];
	if(c!=d)
	{
		cout<<"0000";
		return 0;
	}
	if(a[0]!=b[0]||a[1]!=b[1])
	{
		cout<<1000;
		return 0;
	}
	if((a[2]<'D'&&b[2]>='D')||(a[2]>='D'&&b[2]<'D'))
	{
		cout<<1100;
		return 0;
	}
	if((int(a[2])+1==int(b[2]))||(int(a[2])-1==int(b[2])))
	{
		cout<<1111;
		return 0;
	}
	cout<<1110;
	return 0;
}
