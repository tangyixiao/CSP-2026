#include<bits/stdc++.h>
using namespace std;
namespace did
{
	string c1,c2,s1,s2;
	int main()
	{
		freopen("travel.in","r",stdin);
		freopen("travel.out","w",stdout);
		cin>>c1>>s1>>c2>>s2;
		if(c1!=c2) printf("0000");
		else
		{
			printf("1");
			if(s1[0]!=s2[0]||s1[1]!=s2[1])printf("000");
			else
			{
				printf("1");
				if(s1[2]<='C'&&s2[2]>'C'||s1[2]>'C'&&s2[2]<='C') printf("00");
				else if(abs(s1[2]-s2[2])==1) printf("11");
				else printf("10");
			}
		}
		return 0;
	}
}
int main()
{
	did::main();
	return 0;
}
/*
O(1),100
*/
