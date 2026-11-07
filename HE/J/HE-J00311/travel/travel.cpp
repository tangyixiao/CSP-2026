#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool check1(string a,string b){
	if(a[2]=='A'||a[2]=='B'||a[2]=='C'){
		if(b[2]=='D'||b[2]=='F') return false;
		else return true;
	}else{
		if(b[2]=='D'||b[2]=='F') return true;
		else return false;
	}
}
bool check2(string a,string b){
	if(a[2]=='A'){
		if(b[2]=='B') return true;
		else return false;
	}
	if(a[2]=='B'){
		if(b[2]=='A'||b[2]=='C') return true;
		else return false;
	}
	if(a[2]=='C'){
		if(b[2]=='B') return true;
		else return false;
	}
	if(a[2]=='D'){
		if(b[2]=='F') return true;
		else return false;
	}
	if(a[2]=='F'){
		if(b[2]=='D') return true;
		else return false;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if(check1(s1,s2)) cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(check2(s1,s2)) cout<<"1";
	else cout<<"0";
	return 0;
} 
