#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool check=false;
bool ch(string x,string y){
	if(x[0]!=y[0]&&((x[1]!='0'&&y[1]!='9')||(x[1]!='9'&&y[1]!='0'))) return true;
	else if(x[0]==y[0]&&((x[1]-1==y[1])||(y[1]-1==x[1]))) return true;
	else return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	char a=s1[2],b=s2[2];
	if(c1==c2) cout<<1;
	else {
		cout<<"0000";
		return 0;
}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<1;
	else{
		cout<<0;
		check=true;
	}
	if(((a=='A'&&b=='C')||(a=='C'&&b=='A'))&&check==false) {
		cout<<"10";
		return 0;
	}
	else if(((a=='A'&&b=='B')||(a=='B'&&b=='A')||(a=='C'&&b=='A')||(a=='A'&&b=='C')||(a=='F'&&b=='D')||(a=='D'&&b=='F'))&&check==false){
		cout<<"11";
		return 0;
	}
	else cout<<0;
	if(a==b&&ch(s1,s2)==true) cout<<1;
	else cout<<0;
	return 0;
} 
