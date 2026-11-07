#include<bits/stdc++.h>
using namespace std;
string b,d,x;
int a,c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)x[0]='1';
	else x[0]='0';
	if(x[0]=='1' && b[0]==d[0]&&b[1]==d[1])x[1]='1';
	else x[1]='0';
	if(x[1]=='1'&&(b[2]=='A'||b[2]=='B'||b[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))x[2]='1';
	else if(x[1]=='1'&&(b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F'))x[2]='1';
	else x[2]='0';
	if(x[2]=='1'&&(b[2]=='B'||d[2]=='B'))x[3]='1';
	else if(x[2]=='1'&&(b[2]=='D'||d[2]=='D'))x[3]='1';
	else x[3]='0';
	for(int i=0;i<=3;++i)cout<<x[i];
	return 0;
} 