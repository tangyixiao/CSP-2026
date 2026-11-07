#include<iostream>
#include<cstring>
using namespace std;
int main(){
	ifstream("travel.in");
	outstream("tarvel.out");
	string c1,s1,c2,s2;
	fin>>c1>>s1>>c2>>s2;
	if(c1=="01"|| c1=="16" ||c2=="01" ||c2=="16" || c1!=c2){
		fout<<'0'<<'0'<<'0'<<'0';
	}
	else{
		fout<<'1';
		if(s1[0]==s2[0] &&s1[1]==s2[1]){
			fout<<'1';
			if(s1[2]=='C'&&s2[2]=='D'||s1[2]=='D' &&s2[2]=='C'){
				fout<<'0'<<'0';
			}
			else{
				fout<<'1';
				if(s1[2]==s2[2]+1 || s1[2]==s2[2]-1){
					fout<<'1';
				}
				else{
					fout<<'0';
				}
			}
		}
		else{
			fout<<'0'<<'0'<<'0';
		}
	}
	ifstream.close();
	oustream.close();
	return 0;
}
