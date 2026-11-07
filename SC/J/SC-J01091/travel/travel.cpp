#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int check(char a){
	if(a=='A'||a=='B'||a=='C'){
		return 1;
	}
	else return 0;
}
int check2(char a){
	if(a=='A'){
		return 1;
	}
	if(a=='B'){
		return 2;
	}
	if(a=='C'){
		return 3;
	}
	if(a=='D'){
		return 4;
	}
	if(a=='E'){
		return 5;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	if(check(s1[2])!=check(s2[2])){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(check2(s1[2])+1==check2(s2[2])||check2(s2[2])+1==check2(s1[2])){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}