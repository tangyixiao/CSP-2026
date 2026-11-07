#include<bits/stdc++.h>
using namespace std;
bool check(char c){
	if((c=='A')||(c=='B')||(c=='C')){
		return 1;
	}else{
		return 0;
	}
}
bool ch(char a,char b){
	if((a=='A')&&(b=='B')){
		return 1;
	}
	if((a=='B')&&(b=='C')){
		return 1;
	}
	if((a=='D')&&(b=='F')){
		return 1;
	}
	if((a=='B')&&(b=='A')){
		return 1;
	}
	if((a=='C')&&(b=='B')){
		return 1;
	}
	if((a=='F')&&(b=='D')){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int a1=0,a2=0,a3=0,a4=0;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		a1 = 1;
		if((s1[0]==s2[0])&&(s1[1]==s2[1])){
			a2 = 1;
			if(check(s1[2])==check(s2[2])){
				a3 = 1;
				if(ch(s1[2],s2[2])){
					a4 = 1;
				}
			}
		}
	}
	cout << a1 << a2 << a3 << a4;
	return 0;
} 