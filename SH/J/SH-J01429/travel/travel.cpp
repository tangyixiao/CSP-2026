#include <iostream>
using namespace std;
string c1,s1,c2,s2;
int ifc(string c1,string c2){
	if (c1==c2){
		return 1;
	}
	return 0;
}
int ifr(string s1,string s2,string c1,string c2){
	if (s1[0]==s2[0] and s1[1]==s2[1] and ifc(c1,c2)){
		return 1;
	}
	return 0;
}
string side(string s){
	if (s[2]=="A" or s[2]=="B" or s[3]=="C"){
		return "left";
	}
	return "right";
}
int ifs(string s1,string s2,string c1,string c2){
	if (ifr(s1,s2,c1,c2) and side(s1)==side(s2)){
		return 1;
	}
	return 0;
}
int ifn(string s1,string s2,string c1,string c2){
	if (ifs(s1,s2,c1,c2) and (s1[2]=="A" and s2[2]=="B") or (s1[2]=="B" and (s2[2]=="A" or s2[2]=="C")) or (s1[2]=="D" and s2[2]=="F") or (s1[2]=="F" and s2[2]=="D")){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	cout<<ifc(c1,c2)<<ifr(s1,s2,c1,c2)<<ifs(s1,s2,c1,c2)<<ifn(s1,s2,c1,c2);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
