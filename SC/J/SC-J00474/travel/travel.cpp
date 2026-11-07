#include<bits/stdc++.h>
using namespace std;
int x,y;
string a,b; 
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>a>>y>>b;
	if(x==y)
	{
		printf("1");
		if(a[0]==b[0]&&a[1]==b[1])
		{
			printf("1");
			if(((a[2]-'A')<=2&&(b[2]-'A')<=2)||((a[2]-'A')>2&&(b[2]-'A')>2))
			{
				printf("1");
				if(abs((int)(a[2]-b[2]))==1)printf("1");
				else printf("0");
			} 
			else printf("00"); 
		}
		else printf("000");
	}
	else printf("0000");
	return 0;
}
