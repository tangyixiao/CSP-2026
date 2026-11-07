#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool flag=0;
void check(){
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') flag=1;
		else flag=0;
	}else{
		if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') flag=0;
		else flag=1;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	check();
	if(c1==c2) cout<<1;
	else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]) cout<<1;
	else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&flag) cout<<1;
	else cout<<0;
	if(c1==c2&&flag&&s1[0]==s2[0]&&s1[1]==s2[1]){
		if(s1[2]!='C'&&s1[2]+1==s2[2]) cout<<1;
		else if(s1[2]!='D'&&s1[2]-1==s2[2]) cout<<1;
		else cout<<0;
	}else{
		cout<<0;
	}
}
