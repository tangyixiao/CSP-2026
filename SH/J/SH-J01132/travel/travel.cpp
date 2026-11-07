#include <bits/stdc++.h>
using namespace std;

int rx,ax,rs,xs;
char ro,xo;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%d%c",&rx,&rs,&ro);
	scanf("%d%d%c",&ax,&xs,&xo);
	if(rx==ax) cout <<"1";
	else
	{
		cout <<"0000" <<endl;
		exit(0);
	}
	if(rs==xs) cout <<"1";
	else
	{
		cout <<"000" <<endl;
		exit(0);
	}
	if((ro>='A'&&ro<='C'&&xo>='A'&&xo<='C')||(ro=='D'&&xo=='F')||(ro=='F'&&xo=='D'))
	{
		cout <<"1";
		if((ro=='D'&&xo=='F')||(ro=='F'&&xo=='D'))
		{
			cout <<"1" <<endl;
			exit(0);
		}
	}
	else
	{
		cout <<"00" <<endl;
		exit(0);
	}
	if((ro=='A'&&xo=='B')||(ro=='B'&&xo=='C')||(xo=='A'&&ro=='B')||(xo=='B'&&xo=='C'))
	{
		cout <<"1" <<endl;
	}
	else cout <<"0" <<endl;
	return 0;
}
