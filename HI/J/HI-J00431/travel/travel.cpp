#include<bits/stdc++.h>
using namespace std;
string v="ABCDF";
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//.....
	int a1=0,a2=0,b1=0,b2=0;
	char s1,s2,s3,s4,a3,b3;
	int a4,b4,a5,b5;
	//........
	cin>>s1;
	if(s1=='0') a1=0;
	else a1=(a1+s1-'0')*10;
	cin>>a4;
	a1+=a4;
	//..........
	cin>>s3;
	if(s3=='0') a2=0;
	else a2=(a2+s3-'0')*10;
	cin>>a5;
	a2+=a5;
	cin>>a3;
	cin>>s2;
	if(s2=='0') b1=0;
	else b1=(b1+s2-'0')*10;
	cin>>b4;
	b1+=b4;
	cin>>s4;
	if(s4=='0') b2=0;
	else a2=(b2+s4-'0')*10;
	cin>>b5;
	b2+=b5;
	cin>>b3;
	if(a1==b1) cout<<"1";
	else cout<<"0";
	if(a1==b1&&a2==b2) cout<<"1";
	else cout<<"0";
	if(a3<b3){
		char h;
		h=a3;
		a3=b3;
		b3=h;
	}
	//cout<<a3<<" "<<b3;
	if(a1==b1&&a2==b2&&((a3<='C'&&b3<='C')||(b3>='D'&&a3>='D'))) cout<<"1";
	else cout<<"0";
	if(a1==b1&&a2==b2&&((a3<='C'&&b3<='C')||(b3>='D'&&a3>='D'))&&v.find(a3)-v.find(b3)==1) cout<<"1";
	else cout<<"0";
	
	return 0;
}
