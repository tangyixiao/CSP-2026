#include<bits/stdc++.h>

using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	string s="";
	
	cin>> c1 >> s1 >> c2 >> s2;
	
	for(int i=0;i<c1.size();i++){
		if(c1[i]!=c2[i]){
			s="0000";
			cout << s;
			return 0;
		}
	}
	s="1000";
	
	for(int i=0;i<s1.size()-1;i++){
		if(s1[i]!=s2[i]){
			s="1000";
			cout << s;
			return 0;
		}
	}
	
	s="1100";
	char a,b;
	a=s1[2];
	b=s2[2];
	if(a>='A'&&a<='C'&&b>='A'&&b<='C'||a>='D'&&a<='F'&&b>='D'&&b<='F'){
		s="1110";
		if(s1[2]+1==s2[2]||s1[2]-1==s2[2]){
			s="1111";
			cout << s;
		}else{
			cout << s;
		}
	}else{
		cout << s;
	}
	return 0;
}
