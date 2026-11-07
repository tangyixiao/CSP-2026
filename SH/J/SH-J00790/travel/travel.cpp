#include<bits/stdc++.h>
using namespace std;
int c1,p1,z1,c2,p2,z2;
string s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	p1=(s1[0]-'0')*10+(s1[1]-'0'),p2=(s2[0]-'0')*10+(s2[1]-'0');
	z1=s1[2]-'A'+1,z2=s2[2]-'A'+1;
	bool f1,f2,f3,f4;
	f1=(c1==c2);
	if(f1)f2=(p1==p2);
	if(f2)f3=((z1<=3&&z2<=3)||(z1>=4&&z2>=4));
	if(f3)f4=!((z1+z2==4)&&(z1*z2==3));
	cout<<f1<<f2<<f3<<f4;
	return 0;
}
