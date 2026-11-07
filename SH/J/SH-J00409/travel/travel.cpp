#include<bits/stdc++.h>
using namespace std;
bool check(string b,string d)
{
	char x=b[2],y=d[2];
	if(x<y) swap(x,y);
	if(x>='D' && y<'D') return false;
	else return true;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	bool can1=0,can2=0,can=0;
	if(a==c)
	{
		can=1;cout<<1;
	} 
	else cout<<0;
	if(can && b[0]==d[0] && b[1]==d[1]) 
	{
		cout<<1;
		can1=1;
	}
	else cout<<0;
	if(can1 && check(b,d)) 
	{
		cout<<1;
		can2=1;
	}
	else cout<<0;
	if(can2&&(abs(b[2]-d[2])==1)) cout<<1;
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
