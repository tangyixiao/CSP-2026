#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)//同一个车厢
	{
		int num1=0,num2=0;
		num1=(s1[0]-'0')*10+(s1[1]-'0');
		num2=(s2[0]-'0')*10+(s2[1]-'0');
		if(num1==num2)//同一排
		{
			if((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'))//同一侧
			{
				if(abs(int(s1[2]-s2[2]))==1)//相邻
				{
					cout<<"1111\n";
				}
				else
				{
					cout<<"1110\n";
				}
			}
			else
			{
				cout<<"1100\n";
			}
		}
		else
		{
			cout<<"1000\n";
		}
	}
	else
	{
		cout<<"0000\n";
	}
	return 0;
}