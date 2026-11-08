#include <bits/stdc++.h>
using namespace std;
int sum1,sum2,f;
int main()
{
 	freopen("travel.in","r",srdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	for(int i=0;i<a.size();i++)
		sum1+=a[i]-'0';
	for(int i=0;i<c.size();i++)
		sum2+=c[i]-'0';
	if(sum1==sum2)
	{
		cout<<"1";
		sum1=0;
		sum2=0;
		for(int i=0;i<b.size()-1;i++)
			sum1+=b[i]-'0';
		for(int i=0;i<d.size()-1;i++)
			sum2+=d[i]-'0';
		if(sum1==sum2)
		{
			cout<<"1";
			if(((b[2]-'0'==17 or b[2]-'0'==18 or b[2]-'0'==19) && (d[2]-'0'==17 or d[2]-'0'==18 or d[2]-'0'==19)) or(b[2]-'0'==20 or b[2]-'0'==21) && (d[2]-'0'==20 or d[2]-'0'==21))
			{
				cout<<"1";
				sum1=b[2]-'0';
				sum2=d[2]-'0';
	
				if(sum1==17 && sum2==18)
				{
					cout<<"1";
					f=1;
				}
				if(sum1==18 && (sum2==17 or sum2==20))
				{
					cout<<"1";
					f=1;
				}
				if(sum1==19 && sum2==18)
				{
					cout<<"1";
					f=1;
				}
				if(sum1==20 &&sum2==21)
				{
					cout<<"1";
					f=1;
				}
				if(sum1==21 && sum2==20)
				{
					cout<<"1";
					f=1;
				}
				if(f==0)
					cout<<"0";
			}	
			else
				cout<<"00";
		}
			
		else
		{
			cout<<"000";
		}
			
	}
	else
	{
		cout<<"0000";
	}
	
	
	return 0;
}
