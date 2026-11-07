#include <bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
string st;
int main(){
	freopen("travel.in","r",stdin)
	freopen("travel.out","w",stdout)
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		st[0]='1';
	}else{
		st[0]='0';
	}
	for(int i=0;i<2;i++){
		if(s1[i]==s2[i]){
			if(s1[i+1]==s2[i+1]){
				st[1]='1';
			}
		}else{
			st[1]='0';
		}
	}
	if('A'<=s1[2]&&s1[2]<='C'&&'A'<=s2[2]&&s2[2]<='C'){
		st[2]='1';
	}else if('D'<=s1[2]&&s1[2]<='F'&&'D'<=s2[2]&&s2[2]<='F'){
		st[2]='1';
	}else{
		st[2]='0';
	}
	if('A'<=s1[2]&&s1[2]<='C'&&'A'<=s2[2]&&s2[2]<='C'){
		if(s1[2]+1==s2[2]||s2[2]+1==s1[2]){
			st[3]='1';
		}else{
			st[3]='0';
		}
	}else if('D'<=s1[2]&&s1[2]<='F'&&'D'<=s2[2]&&s2[2]<='F'){
		if(s1[2]+1==s2[2]||s2[2]+1==s1[2]){
			st[3]='1';
		}else{
			st[3]='0';
		}
	}else{
		st[3]='0';
	}
	for(int i=0;i<4;i++){
		if(st[i]=='0'){
			st[i+1]='0';
		}
		cout<<st[i];
	}
	return 0;
}

