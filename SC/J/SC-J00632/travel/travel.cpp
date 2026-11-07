#include<bits/stdc++.h>
using namespace std;
int main() 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int R,X;
	char chR[3],chX[3];
	cin>>R>>chR>>X>>chX;
	//两张车票对应的座位是否在同一节车厢
	if(R==X)
	{
		cout<<1;
	}
	else
	{
		for(int i=1;i<=4;i++)
		{
			cout<<0;
		}
		return 0;
	}
	//两张车票对应的座位是否在同一节车厢的同一排
	if(chR[0]==chX[0] && chR[1]==chX[1])
	{
		cout<<1;
	}
	else
	{
		for(int i=1;i<=3;i++)
		{
			cout<<0;	
		}
		return 0;
	}
	//两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧
	if(chR[2]=='F' && chX[2]!='D')
	{
		cout<<0;
		cout<<0;
		return 0;	
	}  
	else if(chX[2]=='F' && chR[2]!='D')
	{
		cout<<0;
		cout<<0;
		return 0;	
	} 
	else if(chR[2]=='C')
	{
		if(chX[2]!='A' && chX[2]!='B')
		{
			cout<<0;
			cout<<0;
			return 0;
		}	
	} 
	else if(chX[2]=='C')
	{
		if(chR[2]!='A' && chR[2]!='B')
		{
			cout<<0;
			cout<<0;
			return 0;
		}	
	}  
	else if(chR[2]=='B')
	{
		if(chX[2]!='A' && chX[2]!='C')
		{
			cout<<0;
			cout<<0;
			return 0;
		}	
	} 
	else if(chX[2]=='B')
	{
		if(chR[2]!='A' && chR[2]!='C')
		{
			cout<<0;
			cout<<0;
			return 0;
		}	
	}
	else if(chR[2]=='A')
	{
		if(chX[2]!='B' && chX[2]!='C')
		{
			cout<<0;
			cout<<0;
			return 0;
		}	
	}
	else if(chX[2]=='A')
	{
		if(chR[2]!='C' && chR[2]!='B')
		{
			cout<<0;
			cout<<0;
			return 0;
		}	
	} 
	cout<<1;	   
	//两张车票对应的座位是否相邻    
	if(chR[2]=='F' && chX[2]=='D')
	{
		cout<<1;
		return 0;
	}
	else if(chR[2]=='D' && chX[2]=='F')
	{
		cout<<1;
		return 0;
	}
	else if(chR[2]=='C' && chX[2]=='B')
	{
		cout<<1;
		return 0;
	}
	else if(chR[2]=='B' && chX[2]=='C')
	{
		cout<<1;
		return 0;
	}
	else if(chR[2]=='B' && chX[2]=='A')
	{
		cout<<1;
		return 0;
	}
	else if(chR[2]=='A' && chX[2]=='B')
	{
		cout<<1;
		return 0;
	}
	else
	{
		cout<<0;
		return 0;
	}
} 