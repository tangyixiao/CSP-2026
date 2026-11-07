//8:54 
#include<bits/stdc++.h>
using namespace std;

string s1,s2,c1,c2;
int check(){
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C') return 1;
	else return 2;
}
int check1(){
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') return 1;
	else return 2;
}

int main(){
	freopen("travel.in","r",stdin); 
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	else cout<<"1";
	if(!(s1[0]==s2[0]&&s1[1]==s2[1])){
		cout<<"000";
		return 0;
	} 
	else cout<<"1";
	if(!(check()==check1())){
		cout<<"00";
		return 0;
	}
	else cout<<"1";
	if(s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='C'||s1[2]=='D'&&s2[2]=='F'||s1[2]=='B'&&s2[2]=='A'||s1[2]=='F'&&s2[2]=='D'){
		cout<<"1";
		return 0;
	}
	else cout<<"0";
	return 0;
} 

