#include<bits/stdc++.h>
using namespace std;
bool check(char x)
{
	if(x<='C')return 1;
	return 0;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		printf("1");
		if(b[0]==d[0] and b[1]==d[1])
		{
			printf("1");
			if(check(b[2])==check(d[2]))
			{
				printf("1");
				char x=b[2],y=d[2];
				if(x>y)swap(x,y); 
				if(x=='A' and y=='C')
				{
					printf("0");
				}
				else printf("1");
			}
			else printf("00");
		}
		else printf("000");
	}
	else printf("0000");
	return 0;
}