#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string x1,x2,y1,y2;
	cin>>x1>>x2>>y1>>y2;
	int t,t1;
	for(int i=0;i<2;i++)
	{
		if(x1[i]!=y1[i])
			t=-1;
		if(x2[i]!=y2[i])
			t1=-1;
	}
	if(t==-1)
	{
		cout<<"0000";
		return 0;
	}
	else
		cout<<1;
	if(t1==-1)
		cout<<0;
	else
		cout<<1;
	int x=x2[2]-='0';
	int y=y2[2]-='0';
	if(t1!=-1&&((x<=19&&x>=17)&&(y<=19&&y>=17))||((x<=22&&x>=20)&&(y<=22&&y>=20)))
		cout<<1;
	else
	{
		cout<<0;
		t=6;
	}
	if(t==6)
	{
		cout<<0;
		return 0;
	}	
	if((x+1==y||x-1==y)&&x!=20&&y!=20)
		cout<<1;
	else if((x==20&&y==22)||(x==22&&y==20))
		cout<<1;
	else
		cout<<0;
	return 0;
}