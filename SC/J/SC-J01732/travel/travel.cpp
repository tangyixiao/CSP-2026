#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	char a,b,x,y;
	cin>>c1>>s1>>c2>>s2;
	a=s1[0]+s1[1];
	b=s2[0]+s2[1];
	x=s1[2]; y=s2[2];
	if(c1=="01" || c1=="16" || c2=="01" || c2=="16") {
		cout<<"0000";
		return 0;
	}
	if(c1==c2) cout<<1;
	else {
		cout<<"0000";
		return 0;
	}
	if(a==b) cout<<1;
	else {
		cout<<"000";
		return 0;
	}
	if((x<='C' && y<='C') || (x>'C' && y>'C')) cout<<1;
	else {
		cout<<"00";
		return 0;
	}
	int xl=x-'A',yl=y-'A';
	if(abs(xl-yl)==1) cout<<1;
	else cout<<0;
	fclose(stdin);
	return 0;
} 