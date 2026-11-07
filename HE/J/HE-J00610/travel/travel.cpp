#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool check(char a,char b){
	if(a=='A'||a=='B'||a=='C'){
		if(b=='A'||b=='B'||b=='C'){
			return 1;
		}else{
			return 0;
		}
	}else{
		if(b=='D'||b=='F'){
			return 1;
		}else{
			return 0;
		}
	}
}
int tonum(string s){
	int n;
	if(s[2]=='A'){
		n=1;
	}else if(s[2]=='B'){
		n=2;
	}else if(s[2]=='C'){
		n=3;
	}else if(s[2]=='D'){
		n=5;
	}else{
		n=6;
	}
	return n;
}
bool check2(string a,string b){
	if(a[0]!=b[0]||a[1]!=b[1]){
		return 0;
	}
	if(tonum(a)==tonum(b)-1||tonum(a)==tonum(b)+1){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1>>s1>>c2>>s2;
	//同车
	if(c1==c2){
		cout << '1';
	}else{
		cout << "0000";
		return 0;
	}
	//同排
	if(s1[1]==s2[1]&&s1[0]==s2[0]){
		cout <<'1';
		//同侧 
		if(check(s1[2],s2[2])){
			cout <<1;
			//相邻

		}else{
			cout <<'0';
		}
	}else{
		cout <<"00";
	}
 	if(check2(s1,s2)){
		cout <<'1';
	}else{
		cout <<'0';
	}
	return 0;
}
