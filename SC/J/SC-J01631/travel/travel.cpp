#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool check(char a,char b){
	if(a=='A'&&b=='B')return 1;
	if(a=='B'&&(b=='A'||b=='C'))return 1;
	if(a=='C'&&b=='B')return 1;
	if(a=='D'&&b=='E')return 1;
	if(a=='E'&&b=='D')return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
				cout<<1;
				if(check(s1[2],s2[2]))cout<<1;
				else cout<<0;
			}else cout<<0<<0;
		}else cout<<0<<0<<0;
	}else cout<<0<<0<<0<<0;
	return 0;
}