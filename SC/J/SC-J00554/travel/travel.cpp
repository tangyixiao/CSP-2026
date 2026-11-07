#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	freopen("r","travel.in",stdin);
	freopen("w","travel.out",stdout);
	string c1,c2,c3,c4,t1="",t2="";
	char w1,w2;
	bool f=1;
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3)
	{
		f=1;
		cout<<"1";
	}
	else 
	{
		f=0;
		cout<<"0";
	}
	for(int i=0;i<2;i++)
	{
		t1+=c2[i];
		t2+=c4[i];
	}
	if(t1==t2&&f==1)
	{
		f=1;
		cout<<"1";
	}
	else
	{
		f=0;
		cout<<"0";
	}
	w1=c2[2];
	w2=c4[2];
	if(((w1>='A'&&w1<='C'&&w2>='A'&&w2<='C')||(w1>='D'&&w1<='F'&&w2>='D'&&w2<='F'))&&f==1)
	{
		f=1;
		cout<<"1";
	}
	else
	{
		f=0;
		cout<<"0";
	}
	if((w1-w2==1||w1-w2==-1)&&f==1)
	cout<<"1";
	else
	cout<<"0";
	return 0;
}