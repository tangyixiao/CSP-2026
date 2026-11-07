#include <bits/stdc++.h>

using namespace std;

int c1,c2;
string s1,s2;
int a1,a2;

int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	
	if(s1[2]=='A'){
		a1=1;
	}
	if(s1[2]=='B'){
		a1=2;
	}
	if(s1[2]=='C'){
		a1=3;
	}
	if(s1[2]=='D'){
		a1=4;
	}
	if(s1[2]=='F'){
		a1=5;
	}
	
	if(s2[2]=='A'){
		a2=1;
	}
	if(s2[2]=='B'){
		a2=2;
	}
	if(s2[2]=='C'){
		a2=3;
	}
	if(s2[2]=='D'){
		a2=4;
	}
	if(s2[2]=='F'){
		a2=5;
	}
	
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1";
			if(a1==1){
				if(a2==2){
					cout<<"11";
				}else if(a2==3){
					cout<<"10";
				}else{
					cout<<"00";
				}
			}else if(a1==2){
				if(a2==1){
					cout<<"11";
				}else if(a2==3){
					cout<<"11";
				}else{
					cout<<"00";
				}
			}else if(a1==3){
				if(a2==1){
					cout<<"10";
				}else if(a2==2){
					cout<<"11";
				}else{
					cout<<"00";
				}
			}else if(a1==4){
				if(a2==5){
					cout<<"11";
				}else{
					cout<<"00";
				}
			}else if(a1==5){
				if(a2==4){
					cout<<"11";
				}else{
					cout<<"00";
				}
			}
		}else cout<<"000";
	}else cout<<"0000";
	
	return 0;
}
