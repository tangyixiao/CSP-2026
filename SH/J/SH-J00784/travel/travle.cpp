#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int same_side(char a,char b){
	if(a==65||a==66||a==67&&b==65||b==66||b==67){
		return 1;
	}
	else if(a==68||a==70&&b==68||b==70){
		return 1;
	}
	
	return 0;
}
int check(char a){
	
	if(a==65){
		return 1;
	}
	if(a==66){
		return 2;
	}
	if(a==67){
		return 3;
	}
	if(a==68){
		return 4;
	}
	if(a==70){
		return 5;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	if(same_side(char(s1[2]),char(s2[2]))){
		cout<<"1";
	}
	else{
		
		cout<<"00";
		return 0;
	}
	
	if (abs(check(s1[2])-check(s2[2]))==1){
		cout<<"1";
	}
	else{
		cout<<"0";
		return 0;
	}
	
	return 0;
}
