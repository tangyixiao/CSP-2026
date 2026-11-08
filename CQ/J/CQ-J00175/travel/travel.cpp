#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int x1,x2,z1,z2,p1,p2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	x1=(c1[0]-'0')*10+c1[1]-'0';
	x2=(c2[0]-'0')*10+c2[1]-'0';
	z1=(s1[0]-'0')*10+s1[1]-'0';
	z2=(s2[0]-'0')*10+s2[1]-'0';
	p1=s1[2]-'A',p2=s2[2]-'A';
	//printf("%d %d %d %d %d %d",x1,x2,z1,z2,p1,p2);
	if(x1==x2)
	{
		printf("1");
		if(z1==z2)
		{
			printf("1");
			if((p1>=3&&p2>=3)||(p1<3&&p2<3))
			{
				printf("1");
				if(abs(p1-p2)==1) printf("1");
				else printf("0");
			}
			else printf("00");
		}
		else printf("000");
	}
	else printf("0000");
	return 0;
}
/*
02 01A 02 01B 1111
02 01C 02 01A 1110
02 01C 02 01D 1100
02 02B 02 01A 1000
02 01A 03 01A 0000
*/
