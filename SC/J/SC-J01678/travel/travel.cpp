#include <bits/stdc++.h>
using namespace std;
bool solveq3(char c,char d){
	if(c=='B' && d=='A'){
		return true;
	}
	if(c=='C' && d=='A'){
		return true;
	}
	if(c=='A' && d=='B'){
		return true;
	}
	if(c=='C' && d=='B'){
		return true;
	}
	if(c=='A' && d=='C'){
		return true;
	}
	if(c=='B' && d=='C'){
		return true;
	}
	if(c=='F' && d=='D'){
		return true;
	}
	if(c=='D' && d=='F'){
		return true;
	}
	return false;
	
}
bool solveq4(char c,char d){
	if(c=='B' && d=='A'){
		return true;
	}
	if(c=='A' && d=='B'){
		return true;
	}
	if(c=='C' && d=='B'){
		return true;
	}
	if(c=='B' && d=='C'){
		return true;
	}
	if(c=='F' && d=='D'){
		return true;
	}
	if(c=='D' && d=='F'){
		return true;
	}
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	char q1='0',q2='0',q3='0',q4='0';
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		q1='1';
	}
	if(c1==c2 && s1[0]+s1[1]==s2[0]+s2[1]){
		q2='1';
	}
	if(c1==c2 && s1[0]+s1[1]==s2[0]+s2[1]&& solveq3(s1[2],s2[2])){
		q3='1';
	}
	if(c1==c2 && s1[0]+s1[1]==s2[0]+s2[1]&& solveq3(s1[2],s2[2])&&solveq4(s1[2],s2[2])){
		q4='1';
	}
	cout<<q1<<q2<<q3<<q4;
	return 0;
}