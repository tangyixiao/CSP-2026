#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cc(char a,char b)
{
	if(a>='D'&&b<='C') return false;
	if(a<='C'&&b>='D') return false;
	return true;
}
bool dl(char a,char b)
{
	if(a=='A'&&b=='B') return true;
	if(a=='B'&&b=='A') return true;
	if(a=='B'&&b=='C') return true;
	if(a=='C'&&b=='B') return true;
	if(a=='D'&&b=='F') return true;
	if(a=='F'&&b=='D') return true;
	return false;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int car1,car2;
	string a,b;
	cin>>car1>>a>>car2>>b;
	if(car1!=car2)
	{
		cout<<"0000";
		return 0;
	}
	if(!(a[0]==b[0]&&a[1]==b[1]))
	{
		cout<<"1000";
		return 0;
	}
	if(!cc(a[2],b[2]))
	{
		cout<<"1100";
		return 0;
	}
	if(!dl(a[2],b[2]))
	{
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0; 
}