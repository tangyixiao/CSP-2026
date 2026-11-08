#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
string s[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		s[0]='1';
	}
	else{
		s[0]='0';
	}
	if(s1[0]==s2[0] && s1[1]==s2[1]){
		s[1]='1';
		if(s1[2]+1==s2[2]){
			if(s1[2]+1=='D' || s2[2]+1=='D'){
				s[2]='0';
				s[3]='0';
			}
			else{
				s[2]='1';
				s[3]='1';
			}
		}
		else{
		    s[2]='0';
			s[3]='0';
	    }
	}
 	else{
		s[1]='0';
	}
	for(int i=0;i<4;i++){
		cout<<s[i];
	}
	return 0;
}
