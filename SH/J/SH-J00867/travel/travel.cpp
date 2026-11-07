#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2,t1,t2;
char num1,num2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<s1.size()-1;i++)
	{
		t1+=s1[i];
	}
	for(int i=0;i<s2.size()-1;i++)
	{
		t2+=s2[i];
	}
	num1=s1[s1.size()-1];
	num2=s2[s2.size()-1];
	if(c1!=c2)
	{
		cout<<"0000";
	}
	else 
	{
		cout<<"1";
		if(t1!=t2)
		{
			cout<<"000";
		}
		else
		{
			cout<<"1";
			if(num1<='C'&&num2>'C'||num1>'C'&&num2<='C')
			{
				cout<<"00";
			}
			else 
			{
				cout<<"1";
				{
					if(num1+num2==138||abs(int(num1-num2))==1)
					{
						cout<<"1";
					}
					else cout<<"0";
				}
			}
		}
	}
	return 0;
} 
