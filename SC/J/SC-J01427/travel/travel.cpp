#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string str1;
	getline(cin,str1);
	if(str1[0]==str1[7]&&str1[1]==str1[8])
	{
		printf("1");
	}
	else
	{
		printf("0000");
		return 0;
	}
	if(str1[3]==str1[10]&&str1[4]==str1[11])
	{
		printf("1");
	}
	else
	{
		printf("000");
		return 0;
	}
	if(str1[5]>='D'&&str1[12]>='D')
	{
		printf("1");
		if(str1[5]!=str1[12])
		{
			printf("1");
		}
		else
		{
			printf("0");
			return 0;
		}
	}
	else if(str1[5]<'D'&&str1[12]<'D')
	{
		printf("1");
		if((str1[5]+str1[12])%2==1)
		{
			printf("1");
		}
		else
		{
			printf("0");
			return 0;
		}
	}
	else
	{
		printf("00");
		return 0;
	}
}