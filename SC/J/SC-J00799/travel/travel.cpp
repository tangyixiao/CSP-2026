#include<bits/stdc++.h>
using namespace std;
bool isnear(char s1,char s2){
	if(s1 == 'A' || s1 == 'B' || s1 == 'C'){
		if(s2 == 'A' || s2 == 'B' || s2 == 'C'){
			return 1;
		}
	}else{
		if(s2 == 'D' && s2 == 'E'){
			return 1;
		}
	}
	return 0;
}
int main(){
	int c1,c2;
	char s1[3],s2[3];
	cin>>c1>>s1[1]>>s1[2]>>s1[3]>>c2>>s2[1]>>s2[2]>>s2[3];
	if(c1 == c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(s1[1] == s2[1] && s1[2] == s2[2]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(isnear(s1[3],s2[3])){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if(abs(s1[3] - s2[3]) == 1){
		cout<<"1";
		return 0;
	}else{
		cout<<"0";
		return 0;
	}
}