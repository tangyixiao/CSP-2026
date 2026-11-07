#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool s1l=0,s2l=0;
	if (c1==c2){
		cout<<1;
		if (s1[0]+s1[1]==s2[0]+s2[1]){
			cout<<1;
			if (s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
				s1l=1;
			}
			if (s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
				s2l=1;
			}
			if (s1l!=s2l){
				cout<<"00";
			}else{
				cout<<1;
				if (s1[2]-'0'-1==s2[2]-'0'||s2[2]-'0'-1==s1[2]-'0'||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')){
					cout<<1;
				}else{
					cout<<0;
				}
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
