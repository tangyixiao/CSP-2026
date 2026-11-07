#include<bits/stdc++.h>
using namespace std;
string x,y,xx,yy;
bool k=false;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>y>>xx>>yy;
	if(y[2]=='F') y[2]='E';
	if(yy[2]=='F') yy[2]='E';
	if(x==xx) cout<<1;
	else cout<<0;
	char n=y[0]-'0',m=yy[0]-'0',nn=y[1]-'0',mm=yy[1]-'0';
	if(n==m&&nn==mm&&x==xx) cout<<1;
	else cout<<0;
	int num,sum;
	if(y[2]>='A'&&y[2]<='C') num=1;
	else num=2;
	if(yy[2]>='A'&&yy[2]<='C') sum=1;
	else sum=2;
	int a=y[2],b=yy[2],aa=nn+10*n,bb=mm+10*m;
	if(num==sum&&n==m&&nn==mm&&x==xx){
		cout<<1;
		if(abs(a-b)+abs(aa-bb)<2) k=true;
	}
	else cout<<0;
	if(k==true&&num==sum&&n==m&&nn==mm&&x==xx) cout<<1;
	else cout<<0;
	return 0;
}