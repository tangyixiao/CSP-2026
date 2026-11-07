#include<iostream>
using namespace std;
bool side(string x,string y){
	int xx,yy;
	if(x[2]=='A'||x[2]=='B'||x[2]=='C')xx=0;
	else xx=1;
	if(y[2]=='A'||y[2]=='B'||y[2]=='C')yy=0;
	else yy=1;
	return xx==yy;
}
bool sid(string x,string y){
	if(x[0]==y[0]&&x[1]==y[1]){
		int xx,yy;
		if(x[2]=='A'||x[2]=='B'||x[2]=='C')xx=0;
		else xx=1;
		if(y[2]=='A'||y[2]=='B'||y[2]=='C')yy=0;
		else yy=1;
		if(xx==1&&yy==1)return true;
		else if((x[2]-y[2]==1||y[2]-x[2]==1)&&(x[2]!='C'&&y[2]!='D')&&(y[2]!='C'&&x[2]!='D'))return true;
		else return false;
	}else if(x[2]==y[2]){
		if(x[0]*10+x[1]-y[0]*10-y[1]==1||y[0]*10+y[1]-x[0]*10-x[1]==1)return true;
		else return false;
	}else{
		return false;
	}
}
int c1,c2;
string s1,s2;
bool samec;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		samec=true;
		cout<<1;
	}else cout<<0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&samec)cout<<1;
	else cout<<0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&side(s1,s2)&&samec)cout<<1;
	else cout<<0;
	if(sid(s1,s2)&&samec)cout<<1;
	else cout<<0;
}
