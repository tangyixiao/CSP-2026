#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,d;
int w1,w2,p1,p2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	w1=(w1+int(s1[0]))*10+int(s1[1]);
	w2=(w2+int(s2[0]))*10+int(s2[1]);
	p1=s1[2]-'A'+1;
	p2=s2[2]-'A'+1;
	if(c1==c2)
	{
		d=d+"1";
		if(w1==w2)
		{
			d=d+"1";
			if((p1<=3 && p2<=3)||(p1>=4 && p2>=4))
			{
				d=d+"1";
				if((abs(p1-p2)==1)||(p1==4 && p2==6)) 
					d=d+"1";
				else
					d=d+"0";
			}
			else
			{
				d=d+"0";
				d=d+"0";
			}
		}
		else 
		{
			for(int i=1;i<=3;i++)
				d=d+"0"; 
		}
	}
	else
	{
		for(int i=1;i<=4;i++)
			d=d+"0";
	}
	cout<<d;
	return 0;
} 
