#include<bits/stdc++.h>
using namespace std;
namespace Ganlai
{
#define int long long
	const int N=2e5+1,INF=9e18;
	char c1[3],s1[4],c2[3],s2[4];
	void main()
	{
		scanf("%s %s %s %s",c1,s1,c2,s2);
		if(c1[0]==c2[0]&&c1[1]==c2[1])
		{
			putchar('1');
			if(s1[0]==s2[0]&&s1[1]==s2[1])
			{
				putchar('1');
				if((s1[2]<'D'&&s2[2]<'D')||(s1[2]>'C'&&s2[2]>'C'))
				{
					putchar('1');
					if(abs(s1[2]-s2[2])==1)
						puts("1");
					else
						puts("0");
				}
				else
					puts("00");
			}
			else
				puts("000");
		}
		else
			puts("0000");
	}
#undef int
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	Ganlai::main();
	return 0;
}
//	T:O(1)
//	M:3096 KB
