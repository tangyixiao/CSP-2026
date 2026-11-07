#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//Trick||Treat!
queue<ll> r;
bool isside1(char a,char b){
	if(a>='D'&&b<'D'){
		return false;
	}else if(b>='D'&&a<'D'){
		return false;
	}
	return true;
}
bool isside(char a,char b){
	if(a=='C'&&b=='D'){
		return false;
	}else if(a=='D'&&b=='C'){
		return false;
	}
	else if(abs(a-b)==1){
		return true;
	}
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0;
	}if(c1==c2&&s1[1]==s2[1]&&s1[0]==s2[0]){
		cout<<1;
	}else{
		cout<<0;
	}if(c1==c2&&s1[1]==s2[1]&&s1[0]==s2[0]&&isside1(s1[2],s2[2])){
		cout<<1;
	}else{
		cout<<0;
	}if(c1==c2&&s1[1]==s2[1]&&s1[0]==s2[0]&&isside(s1[2],s2[2])&&isside1(s1[2],s2[2])){
		cout<<1; 
	 }else{
	 	cout<<0;
	 }
} 
