#include <bits/stdc++.h>
using namespace std;

string c,s,a,b;
int cnt;
int sum;
int sun;
string e="ABCDF";
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>a>>b;
	
	if(c!=a)cout<<0<<0<<0<<0;
	else 
	{
		cout<<1;    
		for(int i=0;i<2;i++)
		{
			if(s[i]-'0'==b[i]-'0') cnt++;		
		}	
	
		if(cnt!=2)
		{
			cout<<0<<0<<0;
		}
		else
		{
			cout<<1;
				for(int i=0;i<5;i++)
			{
				if(s[2]==e[i])
				{
					sum=i;
					break;
				}
			}
		
			for(int i=0;i<5;i++)
			{
				if(b[2]==e[i])
				{
					sun=i;
					break;
					}
			}
			if(sum<3&&sun<3||sum>2&&sun>2)
			{
				cout<<1;
				if(sum+1==sun||sun+1==sum)cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;
		}	
	} 

	return 0;
}
