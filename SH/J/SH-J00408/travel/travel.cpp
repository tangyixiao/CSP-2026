#include<bits/stdc++.h>
using namespace std;
string n,m;
string r,x;
bool check1(string a,string b)
{
	if(a[0]==b[0]&&a[1]==b[1]) return 1;
	else return 0;
}
bool check2(string a,string b)
{
	if(check1(n,m)==0) return 0;
	if(a[0]==b[0] and a[1]==b[1]) return 1;
	else return 0;
}
bool check3(string a,string b)
{
	if(check1(n,m)==0) return 0;
	if(check2(a,b)==0) return 0;
	if(a[2]<='C' and b[2]<='C' or a[2]>='D' and b[2]>='D') return 1;
	else return 0;
}
bool check4(string a,string b)
{
	if(check1(n,m)==0) return 0;
	if(check2(r,x)==0) return 0;
	if(check3(r,x)==0) return 0;
	if(a[2]>b[2])
	{
		if(a[2]-b[2]==1) return 1;
		else return 0;
	}
	else
	{
		if(b[2]-a[2]==1) return 1;
		else return 0;
	}
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>r>>m>>x;
	cout<<check1(n,m)<<check2(r,x)<<check3(r,x)<<check4(r,x);
	return 0;
}
