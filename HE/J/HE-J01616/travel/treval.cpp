#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool check1(){
	if(c1==c2){
		return 1;
	}
	else return 0;
}
bool check2(){
	if(check1()){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			return 1;
		}
	}else{
		return 0;
	}
}
bool check3(){
	if(check2()){
		if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
			if(s2[2]=='D'||s2[2]=='F') return 0;
			else{
				return 1;
			}
		}else if(s1[2]=='D'||s1[2]=='F'){
			if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') return 0;
			else{
				return 1;
			}
		}
	}else return 0;
}
bool check4(){
	if(check3()){
		if(s1[2]==s2[2]-1||s1[2]==s2[2]+1){
			if((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C')){
				return 0;
			}else{
				return 1;
			}
		}
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	cout<<check1()<<check2()<<check3()<<check4();
	return 0;
}
