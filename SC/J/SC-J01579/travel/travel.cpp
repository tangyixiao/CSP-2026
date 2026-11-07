#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r","stdin");
	freopen("travel.out","w","stdout");
	string xi1,xi2,zo1,zo2;
	cin>>xi1>>zo1>>xi2>>zo2;
	int zuohao1=(zo1[0]-'0')*10+(zo1[1]-'0');
	int zuohao2=(zo2[0]-'0')*10+(zo2[1]-'0');
	int xianghao1=(xi1[0]-'0')*10+(xi1[1]-'0');
	int xianghao2=(xi2[0]-'0')*10+(xi2[1]-'0');
	
	if(xi1==xi2)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	
	
	if(xi1==xi2&&zuohao1==zuohao2)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	
	
	int pan=0;
	if(zo1[2]<='C'&&zo2[2]<='C')
	{
		pan+=1;
	}
	else if(zo1[2]>='D'&&zo2[2]>='D')
	{
		pan+=1;
	}
	else
	{
		pan+=0;
	}
	if(xi1==xi2&&zuohao1==zuohao2&&pan!=0)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	
	
	int p=0,ding=0;
	if(xi1==xi2)
	{
		p++;
	}
	
	if(p==1)
	{
		if((zuohao1-zuohao2==1&&zo1[2]==zo2[2])||
		(zuohao2-zuohao1==1&&zo1[2]==zo2[2])||
		(zuohao1==zuohao2&&zo1[2]-zo2[2]==1)||
		(zuohao1==zuohao2&&zo2[2]-zo1[2]==1))
		{
			cout<<"1";
			ding++;
		}
	}
	
	else
	{
		if((xianghao1-xianghao2==1&&zuohao1==1&&zuohao2==18)||
		(xianghao2-xianghao1==1&&zuohao2==1&&zuohao1==18))
		{
			cout<<"1";
			ding++;
		}
	}
	
	if(ding==0)
	{
		cout<<"0";
	}
	return 0;	
} 