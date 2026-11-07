#include<bits/stdc++.h>
using namespace std;
int rk[2];
int xk[2];
string c1,s1,c2,s2; 
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int r=0,x=0;
	int sum=10;
	for(int i=0;i<2;i++)
	{
		r+=(c1[i]-'0')*sum;
		x+=(c2[i]-'0')*sum;
		sum/=10;
	}
	sum=10;
	for(int i=0;i<2;i++)
	{
		rk[0]+=(s1[i]-'0')*sum;
		xk[0]+=(s2[i]-'0')*sum;
		sum/=10; 
	}
	rk[1]=s1[2]-'A';
	xk[1]=s2[2]-'A';
	if(r==x)
	{
		cout<<1;
		if(rk[0]==xk[0])
		{
			cout<<1;
			if((rk[1]<=2&&xk[1]<=2)||(rk[1]>2&&xk[1]>2))
			{
				cout<<1;
				if(abs(rk[1]-xk[1])==1)
				{
					cout<<1;
				}else
				{
					cout<<0;
				}
			}
			else
			{
				cout<<0<<0;
			}
		}
		else cout<<0<<0<<0;
	}
	else
	{
		cout<<0<<0<<0<<0;
	}	
	return 0;
} 
