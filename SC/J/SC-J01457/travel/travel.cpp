#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fin("travel.in");
	ofstream fout("travel.out");
	string c1,s1,c2,s2="\0";
	fin>>c1>>s1>>c2>>s2;
	fout<<(c1==c2);
	fout<<(c1==c2 && s1[0]==s2[0] && s1[1]==s2[1]);
	fout<<(c1==c2 && s1[0]==s2[0] && s1[1]==s2[1] && ((s1[2]<='C' && s2[2]<='C') || (s1[2]>='D' && s2[2]>='D')));
	fout<<(c1==c2 && s1[0]==s2[0] && s1[1]==s2[1] && ((s1[2]<='C' && s2[2]<='C') || (s1[2]>='D' && s2[2]>='D')) && abs(s1[2]-s2[2]==1));
	fin.close();
	fout.close();
	return 0;
}