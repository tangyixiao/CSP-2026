#include<bits/stdc++.h>
#define long long int
using namespace std;
int xa,pa,xb,pb;
char za,zb;
bool tongce(char a,char b){
	if((a=='D'&&b=='F')||(a=='F'&&b=='D')){
		return true;
	}
	if((a<='C'&&a>='A'&&b<='C'&&b>='A')){
		return true;
	}
	return false;
}
bool aizuo(char a,char b){
	if(!tongce(a,b)){
		return false;
	}
	if((a=='D'&&b=='F')||(a=='F'&&b=='D')){
		return true;
	}
	if((a=='A'&&b=='B')||(a=='B'&&b=='A')){
		return true;
	}
	if((a=='B'&&b=='C')||(a=='C'&&b=='B')){
		return true;
	}
	return false;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>xa>>pa>>za;
	cin>>xb>>pb>>zb;
	if(xa!=xb){
		cout<<"0000";
		return 0;
	}
	if(pa!=pb){
		cout<<"1000";
		return 0;
	}
	if(!tongce(za,zb)){
		cout<<"1100";
		return 0;
	} 
	if(!aizuo(za,zb)){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
