#include<bits/stdc++.h> 
using namespace std;
bool check(char a,char b){
	if(a>='D'&&b<'D')return false;
	if(a<'D'&&b>='D')return false;
	else return true;
}
bool c(char a,char b){
	if(a>='D'&&b>='D')return true;
	else if(abs(a-b)==1)return true;
	if(a=='C'&&b=='D')return false;
	if(a=='D'&&b=='C')return false;
	else return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;cin>>c1>>c2>>s1>>s2;
	bool x=c1==s1;
	if(x)cout<<1;
	else{
		cout<<"0000";return 0;
	}
	bool y=c2[0]==s2[0]&&c2[1]==s2[1];
	if(y)cout<<1;
	else{
		cout<<"000";return 0;
	}
	if(check(c2[2],s2[2])){
		cout<<1;
	}else{
		cout<<"00"<<endl;
		return 0;
	}
	if(c(c2[2],s2[2])){
		cout<<1<<endl;
	}else cout<<0<<endl;
	return 0;
}
