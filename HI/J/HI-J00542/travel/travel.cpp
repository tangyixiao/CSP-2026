#include<bits/stdc++.h>
using namespace std;
string s1[4];
string s2[4];
int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a1=0,a2=0,a3=0,a4=0;
	if(c1==c2){
		a1=1;
	}else{
		a1=0;
	}
	if(s1[0]==s2[0] && s1[1]==s2[1] && c1==c2){
		a1=1;
		a2=1;
	}
	if(s1[0]==s2[0] && s1[1]==s2[1] && c1==c2){
		if(s1[3]=='A' && s2[3]=='B' || s2[3]=='C'){
			if(s1[3]=='D' && s2[3]=='F'){
				a1=1;
				a2=1;
				a3=1;
			}
		}
	}
	while(s1[3]=='A'){
		if(s2[3]=='B'){
			a4=1;
		}
	}
	cout<<a1<<a2<<a3<<a4; 
	return 0;
}
