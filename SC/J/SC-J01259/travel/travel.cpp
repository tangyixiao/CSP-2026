#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s2,s1;
bool flag=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
		cout<<1;
	else 
	{
		cout<<0;	
		flag=1;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&!flag)
		cout<<1;
	else
	{
		cout<<0;
		flag=1;
	}
	if(s1[2]<='C'&&s2[2]<='C'&&!flag)
		cout<<1;
	else if(s1[2]>='D'&&s2[2]>='D'&&!flag)
		cout<<1;
	else
	{
		cout<<0;
		flag=1;
	}
	if((s1[2]+1==s2[2]||s1[2]-1==s2[2])&&!flag)
		cout<<1;
	else 
		cout<<0;
	return 0;
} 
//olD-mOwOn;
/*霉条，补。市区*/ 
/*回家第一件事，打开KARDSjjc,150金币一次我非常癫狂，德国主国法国盟国三张撤退坦克
还有俯冲懵逼哥谁能如何我？！*/ 