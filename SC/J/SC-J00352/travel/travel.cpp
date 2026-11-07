#include<bits/stdc++.h>
#define N 200005
//#define int long long
#define endl '\n'
using namespace std;

string in;
int ans[5];
struct node{
	int chexiang,pai;
	char bian;
}a,b;

signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
//	freopen("travel5.in","r",stdin);
//	freopen("travel5_my.out","w",stdout);
	cin>>a.chexiang>>in;
	a.pai=(in[0]-'0')*10+in[1]-'0';
	a.bian=in[2];
	cin>>b.chexiang>>in;
	b.pai=(in[0]-'0')*10+in[1]-'0';
	b.bian=in[2];
	if(a.chexiang==b.chexiang){
		printf("1");
		if(a.pai==b.pai){
			printf("1");
			if((a.bian<='C'&&a.bian>='A'&&b.bian<='C'&&b.bian>='A')||(a.bian<='F'&&a.bian>='D'&&b.bian<='F'&&b.bian>='D')){
				printf("1");
				if((a.bian!='D'&&b.bian!='D'&&abs(a.bian-b.bian)==1)||(a.bian=='D'&&b.bian=='D')||(a.bian=='F'&&b.bian=='F')) printf("1");
				else printf("0");
			}
			else printf("00");
		}
		else printf("000");
	}
	else printf("0000");
	return 0;
}//知颖你太美