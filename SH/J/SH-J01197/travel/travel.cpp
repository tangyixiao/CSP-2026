#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	char c1=s1[2],c2=s2[2];
	if((c1<='C'&&c2<='C')||(c1>='D'&&c2>='D')) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if((c1=='C'&&c2=='B')||(c1=='B'&&c2=='C')||(c1=='A'&&c2=='B')||(c1=='B'&&c2=='A')||
	(c1=='D'&&c2=='F')||(c1=='F'&&c2=='D')) cout<<1;
	else cout<<0;
	return 0;
}
