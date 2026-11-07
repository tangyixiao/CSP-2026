#include<bits\\stdc++.h>
using namespace std;
int main(){
	bool a,b;
	string c1,c2;
	char s1[10],s2[10];
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		a=true;
	}else{
		a=false;
	}
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
		b=true;
	}else{
		b=false;
	}  
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			if(a==b){
				if(a==false){
					cout<<"1111";
				}else if(s1[2]=='B'||s2[2]=='B'){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}else{
				cout<<"1100";
			}
		}else{
			cout<<"1000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
