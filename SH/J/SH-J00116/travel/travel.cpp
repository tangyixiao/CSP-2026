#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int Xc,Rc,Xch,Rch;
	char Xs,Rs;
	scanf("%d %d %c %d %d %c",&Rch,&Rc,&Rs,&Xch,&Xc,&Xs);
	if(Rch==Xch)
	{
		printf("1");
		if(Rc==Xc)
		{
			printf("1");
			if(Rs<='C'&&Xs<='C'||Rs>='D'&&Xs>='D')
			{
				printf("1");
				if(Rs<='C'&&Xs<='C'&&abs(Rs-Xs)==1||Rs=='D'&&Xs=='F'||Rs=='F'&&Xs=='D')
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
	fclose(stdin);
	fclose(stdout);
	return 0;
}
