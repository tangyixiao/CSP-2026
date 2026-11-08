#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
	string c1,s1,c2,s2,b1,b2,d1,d2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
		for(int i=1;i<=s1.size();i++)
		{
			if(s1[i]>='0'&&s1[i]<='9')
			{
				b1=b1+s1[i];
			}
		}
		for(int i=1;i<=s2.size();i++)
		{
			if(s2[i]>='0'&&s2[i]<='9')
			{
				b2=b2+s2[i];
			}
		}
		if(b1==b2)
		{
			cout<<"1";
			for(int i=1;i<=s1.size();i++)
			{
				if(s1[i]>='A'&&s1[i]<='Z')
				{
					d1=d1+s1[i];
				}
			}
			for(int i=1;i<=s2.size();i++)
			{
				if(s2[i]>='A'&&s2[i]<='Z')
				{
					d2=d2+s2[i];
				}
			}
			if(((d1=="A"||d1=="B"||d1=="C")&&(d2=="A"||d2=="B"||d2=="C"))||((d1=="D"||d1=="F")&&(d2=="D"||d2=="F")))
			{
				cout<<"1";
				if((d1=="A"&&d2=="B")||(d1=="B"&&d2=="A")||(d1=="B"&&d2=="C")||(d1=="C"&&d2=="B")||(d1=="D"&&d2=="F")||(d1=="F"&&d2=="D"))
				{
					cout<<"1";
				}
				else
				{
					cout<<"0";
				}
			}
			else
			{
				cout<<"00";
			}
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
