#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	char sa[3],sb[3];
	int ca[2],cb[2];
	for (int i = 0;i < 2;i++)
	{
		ca[i] = int(getchar()-'0');
	}
	getchar();
	for (int i = 0;i < 3;i++)
	{
		sa[i] = getchar();
	}
	getchar();
	for (int i = 0;i < 2;i++)
	{
		cb[i] = int(getchar()-'0');
	}
	getchar();
	for (int i = 0;i < 3;i++)
	{
		sb[i] = getchar();
	}
	ca[1] += ca[0]*10;
	cb[1] += cb[0]*10;
	int ssa = int(sa[0]-'0')*10 + int(sa[1]-'0');
	int ssb = int(sb[0]-'0')*10 + int(sb[1]-'0');
	vector<int> ans;
	int a = int(sa[2]-'A');
	int b = int(sb[2]-'A');
	if (ca[1] == cb[1])
	{
		printf("1");
		if (ssa == ssb)
		{
			printf("1");
			if ((a <= 2 && b <= 2) || (a > 2 && b > 2))
			{
				printf("1");
				if (abs(a-b) == 1)
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
		else
		{
			for (int i = 0;i < 3;i++)
			{
				printf("0");
			}
			return 0;
		}
	}
	else
	{
		for (int i = 0;i < 4;i++)
		{
			printf("%d",0);
		}
		return 0;
	}
	
	
	
	return 0;
 } 
