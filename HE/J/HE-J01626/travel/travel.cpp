#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fin("travel.in");
	ofstream fout("travel.out");
	char c1,c2,s1,s2; 
	fin>>c1>>s1>>c2>>s2;
	char a[3]={"0"};
	char b[3]={"0"};
	if(c1==c2){
		fout<<1;
		if(a[1]==b[1]){
			fout<<1;
			if(a[2]>="A"&&b[2]<="C"&&a[2]>="A"&&b[2]<="C"){
				fout<<1;
				if(a[2]+"1"==b[2]||a[2]-"1"==b[2]){
					fout<<1;
				}else {
					fout<<1;
					if(a[2]+"1"==b[2]||a[2]-"1"==b[2]){
					fout<<1;}}}}}
	else{
		cout<<"0000";
	}
	return 0;
} 
