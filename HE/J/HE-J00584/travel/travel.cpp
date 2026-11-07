#include<iostream>
#include<string>
using namespace std;
string c1,s1,c2,s2,pai1,pai2,wei1,wei2;
int a1=0,a2=0,a3=0,a4=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<3;i++)
	{
		if(i!=2)
		{
			pai1=pai1+s1[i];
			pai2=pai2+s2[i];
		}
		else
		{
			wei1=s1[i];
			wei2=s2[i];
		}
	}
	if(c1==c2)
	{
		a1=1;
		if(pai1==pai2)
		{
			a2=1;
			if((wei1=="A"||wei1=="B"||wei1=="C")&&(wei2=="A"||wei2=="B"||wei2=="C"))
			{
				a3=1;
				if(!(wei1=="A"&&wei2=="C")&&(!(wei1=="C"&&wei2=="A")))
				{
					a4=1;
				}
			}
			if((wei1=="D"||wei1=="F")&&(wei2=="D"||wei2=="F"))
			{
				a3=1;
				a4=1;
			}
		}
	}
	cout<<a1<<a2<<a3<<a4;
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
