#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<string>
using namespace std;
#define int long long

string r2,x2;
int x1,r1;

signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r1>>r2>>x1>>x2;
	if(r1 == x1)
	{
		printf("1");
		if((r2[0] == x2[0])&&(r2[1] == x2[1]))
		{
			printf("1");
			if((r2[2]-'A'<3)==(x2[2]-'A'<3))
			{
				printf("1");
				if(((r2[2]-'A'-1)==(x2[2]-'A'))||((r2[2]-'A'+1)==(x2[2]-'A')))
				{
					printf("1");
				}else
				{
					printf("0");
				}
			}else
			{
				printf("00");
			}
		}else
		{
			printf("000");
		}
	}else
	{
		printf("0000");
	}
	return 0;
	
}

