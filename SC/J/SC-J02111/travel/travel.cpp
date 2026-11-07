#include<bits/stdc++.h>
using namespace std;
//bool pan(char x,char y)
//{
//	if(x=='C'&&y=='D')
//	return 0;
//	if(x=='F'&&y!='E')
//	return 0;
//	if(x+1==y)
//	return 1;
//}
int main()
{
	//提交时解除注释！！
	 freopen("travel.in","r",stdin);
		freopen("travel.out","w",stdout);
	string s1,s2,c1,c2;
	cin>>c1>>s1>>c2>>s2;
	int a1,a2;
	a1=c1[0]-'0'+10*(c1[1]-'0');
	a2=c2[0]-'0'+10*(c2[1]-'0');
	if(a1==a2)
	{
		cout<<1;
	}else {
		cout<<"0000";
		return 0;
	}
	
	int b1,b2;
	b1=s1[0]-'0'+10*(s1[1]-'0');
	b2=s2[0]-'0'+10*(s2[1]-'0');
	if(b1==b2)
	{
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	int cnt1;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C')
	{
	 cnt1=1;	
	}else {
		cnt1=2;
	}
	int cnt2;
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')
	{
	 cnt2=1;	
	}else cnt2=2;
	if(cnt1==cnt2) cout<<1;
	else{
	cout<<"00";
	return 0;
	}
//	if(s2[2]>s1[2])
//	{
//		char x=s1[2];
//		s1[2]=s2[2];
//		s2[2]=x;
//	}
	int l=0;
	if(s1[2]=='A'&&s2[2]=='B')
	l=1;
	if(s1[2]=='B'&&s2[2]=='A')
	l=1;
	if(s1[2]=='B'&&s2[2]=='C')
	l=1;
	if(s1[2]=='C'&&s2[2]=='B')
	l=1;
	if(s1[2]=='D'&&s2[2]=='E')
	l=1;
	if(s1[2]=='E'&&s2[2]=='D')
	l=1;
//i(s2[2],s1[2])==0)
	if(l==1)
	{
		cout<<1;
	}else {
		cout<<0;
	} 
	 return 0;
}