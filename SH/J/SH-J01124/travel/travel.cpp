#include<bits/stdc++.h>
using namespace std;
string cr,sr,cx,sx;
string a="A",b="B",c="C",d="D",f="F";
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	if(cr!=cx)
	{
		cout<<"0000"<<endl;
		return 0;
	}
	else if(sr[0]!=sx[0] || sr[1]!=sx[1])
	{
		cout<<"1000"<<endl;
		return 0;
	}
//	else if((sr[2]=="D"&&sx[2]=="F")||(sr[2]=="F"&&sx[2]=="D"))
//	{
//		cout<<"1111"<<endl;
//		return 0;
//	}
	else if(((sr[2]==d[0]||sr[2]==f[0])&&(sx[2]==a[0]||sx[2]==b[0]||sx[2]==c[0]))||((sx[2]==d[0]||sx[2]==f[0])&&(sr[2]==a[0]||sr[2]==b[0]||sr[2]==c[0])))
	{
		cout<<"1100"<<endl;
		return 0;
	}	
	else if((sr[2]==a[0]&&sx[2]==c[0])||(sr[2]==c[0]&&sx[2]==a[0]))
	{
		cout<<"1110"<<endl;
		return 0;
	}
	else
	{
		cout<<"1111"<<endl;
		return 0;
	}
}



//三年OI一场空。。。。。。NB的CCF大神！！！！拯救一下这位已经初二但六年级js初赛都没过，七年级写了两个freopen in导致痛失二等奖的他吧 
