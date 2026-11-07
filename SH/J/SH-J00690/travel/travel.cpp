//记得把cin,cout改成fin,fout 
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int c1,c2;
string s1,s2;
string f(char x,char y){
	int r=0;
	if(x>='A'&&x<='C') r++;
	if(y>='A'&&y<='C') r++;
	if(r==1) return "1100";
	if(r==2){
		if(abs((int)x-(int)y)==1) return "1111";
		else return "1110";
	}
	if(r==0) return "1111";
}
int main(){
	ifstream fin("travel.in");
	ofstream fout("travel.out");
	fin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			fout<<f(s1[2],s2[2]);
		}else{
			fout<<"1000";
		}
	}else{
		fout<<"0000";
	}
	fin.close();
	fout.close();
	return 0;
}
