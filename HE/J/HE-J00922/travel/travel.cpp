#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,a1,b1,a2,b2;
	cin>>c1>>c2>>s1>>s2;
	for(int i=0;i<max(c2.size(),s2.size());i++)
	{
		if(s2[i]>='0'&&s2[i]<='9')
		{
			b1+=s2[i];
		}
		else
		{
			b2+=s2[i];
		}
		if(c2[i]>='0'&&c2[i]<='9')
		{
			a1+=c2[i];
		}
		else
		{
			a2+=c2[i];
		}
	}
	if(c1==s1)
	{
		cout<<1;
		if(a1==b1)
		{
			cout<<1;
			if(((a2>="A"&&a2<="c")&&(b2>="A"&&b2<="C"))||((a2>="D"&&a2<="F")&&(b2>="D"&&b2<="F")))
			{
				cout<<1;
			}
			else{
				cout<<0;
			}
			if((a2=="A"&&b2=="B")||(a2=="B"&&b2=="A")||(a2=="B"&&b2=="C")||(a2=="C"&&b2=="B")||(a2=="F"&&b2=="D")||(a2=="D"&&b2=="F"))
				{	
					cout<<1;
				}
			else
				{
					cout<<0;
				}	
			}
		else
		{
			cout<<0<<0<<0;
			return 0;
		}
		}
	else
	{
		cout<<0<<0<<0<<0;
		return 0;
	}
	return 0;
}
