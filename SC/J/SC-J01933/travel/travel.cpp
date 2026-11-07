#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll x,y;
string c1,s1,c2,s2;
bool fenlei(char c){
	if(c=='A'||c=='B'||c=='C'){
		return 1;
	}
	return 0;
}
bool xiangling(char a,char b){
	if((a=='A'&&b=='B')||(a=='B'&&b=='C')||(a=='D'&&b=='F')){
		return 1;
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(fenlei(s1[2])==fenlei(s2[2])){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if(xiangling(s1[2],s2[2])){
		cout<<"1";
	}else{
		cout<<"0";
		return 0;
	}
	return 0;
}