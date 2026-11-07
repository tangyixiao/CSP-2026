#include<bits/stdc++.h>
using namespace std;
char c1[2],c2[2];
char a1[3],a2[3];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i = 1;i<=2;i++)
	{
		cin>>c1[i]; 
	}
	for(int i = 1;i<=3;i++)
	{
		cin>>a1[i]; 
	}
	for(int i = 1;i<=2;i++)
	{
		cin>>c2[i]; 
	}
	for(int i = 1;i<=3;i++)
	{
		cin>>a2[i]; 
	}
	
//	for(int i = 1;i<=2;i++)
//	{
//		cout<<c1[i]; 
//	}
//	for(int i = 1;i<=3;i++)
//	{
//		cout<<a1[i]; 
//	}
//	for(int i = 1;i<=2;i++)
//	{
//		cout<<c2[i]; 
//	}
//	for(int i = 1;i<=3;i++)
//	{
//		cout<<a2[i]; 
//	}
	
	for(int i = 1;i<=1;i++)
	{
//		cout<<c1[i]<<' '<<c2[i]<<endl;
		if(c1[i]-'0'==c2[i]-'0'&&c1[i+1]-'0'==c2[i+1]-'0')
		{
			cout<<1;
			for(int i = 1;i<=1;i++)
			{
				if(a1[i]-'0'==a2[i]-'0'&&a1[i+1]-'0'==a2[i+1]-'0')
				{
					cout<<1;
					if(a1[3]-'0'<='C'-'0'&&a1[3]-'0'>='A'-'0'&&a2[3]-'0'>='A'-'0'&&a2[3]-'0'<='C'-'0'||a1[3]-'0'>='D'-'0'&&a1[3]-'0'<='F'-'0'&&a2[3]-'0'<='F'-'0'&&a2[3]-'0'>='D'-'0')
					{
						cout<<1;
						if(a1[3]-'0'+1==a2[3]-'0'&&a1[3]-'0'+1<='F'-'0'||a1[3]-'0'-1==a2[3]-'0'&&a1[3]-'0'-1>='A'-'0'||a1[3]-'0'=='D'-'0'&&a2[3]-'0'=='F'-'0')
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
					else
					{
						cout<<0<<0;
						return 0;
					}
				}
				else
				{
					cout<<0<<0<<0;
					return 0;
				}
			}
		}
		else
		{
			cout<<0<<0<<0<<0;
			return 0;
		}
	}
	return 0;
 } 
