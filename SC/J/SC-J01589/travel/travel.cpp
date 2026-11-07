#include<bits/stdc++.h>
using namespace std;
string a,aa,b,bb;
int f[305];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	f['A']=1;f['B']=1;f['C']=1;f['D']=2;f['F']=2;
	cin>>a>>aa>>b>>bb;
	if(a==b)
	{
		printf("1");
		if(aa[0]==bb[0]&&aa[1]==bb[1])
		{
			printf("1");
			if(f[aa[2]]==f[bb[2]])
			{
				printf("1");
				if(aa[2]+1==bb[2]||bb[2]+1==aa[2])
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