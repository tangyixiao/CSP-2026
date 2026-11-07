#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool d1,d2,d3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)d1=1,cout<<1;
	else cout<<0;
	if(d1==1&&b[0]==d[0]&&b[1]==d[1])d2=1,cout<<1;
	else cout<<0;
	if(d2==1&&((b[2]<'D'&&d[2]<'D')||(b[2]>'C'&&d[2]>'C')))d3=1,cout<<1;
	else cout<<0;
	if(d3==1&&((b[2]-d[2]==1)||(d[2]-b[2]==1)))cout<<1;
	else cout<<0;
	return 0;
}