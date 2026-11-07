#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	char p1[5],p2[5],z1[5],z2[5];
	bool flag=1;
	p1[0]=s1[0];
	p1[1]=s1[1];
	p2[0]=s2[0];
	p2[1]=s2[1];
	z1[0]=s1[2];
	z2[0]=s2[2];
	if(c1==c2) cout<<"1";
	else cout<<"0";
	if(p1[0]==p2[0]&&p1[1]==p2[1]) cout<<"1";
	else cout<<"0";
	if((z1[0]<='C'&&z2[0]<='C')||(z1[0]>'C'&&z2[0]>'C')) cout<<"1";
	else{
		cout<<"0";
		flag=0;
	}
	if(flag&&(z1[0]==z2[0]-1||z1[0]==z2[0]+1)) cout<<"1";
	else cout<<"0";
	return 0;
}
