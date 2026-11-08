#include<bits/stdc++.h>
using namespace std;

string box1,box2;
string pos1,pos2;

bool sabox=0,sarow=0,saside=0,saby=0;

int side1=0,side2=0;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>box1>>pos1>>box2>>pos2;
	//box
	if(box1==box2)
	{
		sabox=true;
	} 
	//row
	if(sabox&&pos1[0]==pos2[0]&&pos1[1]==pos2[1])
	{
		sarow=true;
	}
	//side
	if(pos1[2]=='A'||pos1[2]=='B'||pos1[2]=='C')
	{
		side1=-1;
	}
	else if(pos1[2]=='D'||pos1[2]=='F')
	{
		side1=1;
	}
	
	if(pos2[2]=='A'||pos2[2]=='B'||pos2[2]=='C')
	{
		side2=-1;
	}
	else if(pos2[2]=='D'||pos2[2]=='F')
	{
		side2=1;
	}
	
	if(sabox&&sarow&&side1==side2)
	{
		saside=true;
	}
	//by
	if(saside)
	{
		if(side1==1)
		{
			saby=true;
		}
		else if(side1==-1)
		{
			int a=pos1[2];
			int b=pos2[2];
			if(abs(a-b)==1)
			{
				saby=true;
			}
		}
	}
	
	cout<<sabox<<sarow<<saside<<saby;
	
	return 0;
} 
