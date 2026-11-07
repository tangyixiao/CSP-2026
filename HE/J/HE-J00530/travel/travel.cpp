#include <bits/stdc++.h>
using namespace std;
bool flag1=0,flag2=0,flag3=0; 
string  r1,r2,x1,x2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>> r1 >> r2 >> x1 >> x2;
	//1 ≥µœ· 
	if(r1==x1)
	{
		cout<<"1";
		flag3=1; 
	}
	else cout<<"0";
	//2 ≈≈ 
	if(flag3)
	{
		if(r2[0]==x2[0]&&r2[1]==x2[1])
		{
			cout<<"1";
			flag1=1;
		}
		//
	}
	else cout<<"0";
	
	//3 Õ¨≤‡ 
	if(flag1&&flag3){
		if((int(r2[2])+int(x2[2])==138)||
			(int(r2[2])+int(x2[2])==131)||
	   		(int(r2[2])+int(x2[2])==132)||
	   		(int(r2[2])+int(x2[2])==133)
	  		)
	  		{
	  			cout<<"1"; 
	  			flag2=1;
	  		}
	}
	else cout<<"0";
	//4  œ‡¡⁄ 
	if(flag1&&flag2&&flag3)
	{
		if(r2[2]==x2[2]-1||r2[2]==x2[2]+1)
		cout<<"1";
		//	
	}
	else cout<<"0";
	
	
	
	
	
	return 0;
 } 
