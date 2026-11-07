#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int k=s1[2]-'0',k1=s2[2]-'0';
	if(c1==c2)
	{
		printf("1");
		if((s1[0]==s2[0])&&(s1[1]==s2[1]))
		{
			printf("1");
			if((k<=19&&k1<=19)||(k>=20&&k1>=20))
			{
				printf("1");
				if((k+1==k1)||(k-1==k1))
				{
					printf("1");
				}
				else
				{
					printf("0");	
				}
			}
			else
			{
				printf("00");	
			}
		}
		else 
		{
			printf("000");
		}
	}	
	else 
	{
		printf("0000");
	}
	return 0;
}