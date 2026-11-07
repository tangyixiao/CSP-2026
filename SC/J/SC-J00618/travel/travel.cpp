#include<bits/stdc++.h>
using namespace std;

string a1,a2,b1,b2;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>a1>>a2>>b1>>b2;
	int f1=(a1==b1),f2=(a2[0]==b2[0]&&a2[1]==b2[1]&&f1),f3=0,f4=0;
	if(((a2[2]>='A'&&a2[2]<='C'&&b2[2]>='A'&&b2[2]<='C')||(a2[2]>='D'&&a2[2]<='E'&&b2[2]>='D'&&b2[2]<='E'))&&f2)f3=1;
	int x=min(a2[2],b2[2]),y=max(a2[2],b2[2]);
	if(y-x==1&&f3)f4=1;
	cout<<f1<<f2<<f3<<f4;
	return 0;
}