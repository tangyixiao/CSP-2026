#include<bits/stdc++.h>
using namespace std;
char str[5],str1[5],str2[5],str3[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int i,a=0,b=0,c=0,d=0;
	char x,y;
	scanf("%s %s %s %s",str,str1,str2,str3);
	for(i=0;i<strlen(str);++i)
		a=a*10+(str[i]-'0');
	for(i=0;i<strlen(str2);++i)
		c=c*10+(str2[i]-'0');
	if(a==c)
	{
		printf("1");
		for(i=0;i<strlen(str1);++i)
		{
			if(str1[i]>'9'||str1[i]<'0')
				break;
			b=b*10+(str1[i]-'0');
		}
		for(i=0;i<strlen(str3);++i)
		{
			if(str3[i]>'9'||str3[i]<'0')
				break;
			d=d*10+(str3[i]-'0');
		}
		if(b==d)
		{
			printf("1");
			x=str1[2];
			y=str3[2];
			if(((x>='D'&&x<='F')&&(y>='D'&&y<='F'))||((x>='A'&&x<='C')&&(y>='A'&&y<='C')))
			{
				printf("1");
				if((x=='A'&&y=='B')||(x=='B'&&y=='C')||(x=='D'&&y=='F')||(y=='A'&&x=='B')||(y=='B'&&x=='C')||(y=='D'&&x=='F'))
					printf("1");
				else
					printf("0");
			}
			else
				printf("00");
			
		}
		else
			printf("000");
		
	}
	else
		printf("0000");
	return 0;
}

