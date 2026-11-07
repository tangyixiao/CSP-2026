#include<bits/stdc++.h>
using namespace std;
int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >>c1>>s1>>c2>>s2;
	if (c1==c2){
		cout <<1;
		if (s1[1]==s2[1] && s1[0]==s2[0]){
			cout <<1;
			char ss1=s1[2],ss2=s2[2];
			if (ss1>ss2){
				char f=ss1;
				ss1=ss2;
				ss2=f;
			}
			
			if (ss1>='D' || ss2<='C'){
				
				cout <<1;
				if (ss1>='D'){
					cout <<1;
				}else if (ss2<='C'){
					if ((ss1=='A' && ss2=='B') || (ss1=='B' && ss2=='C')){
						cout <<1;
					}else {
						cout <<0;
					}
				}
			}else {
				cout <<0<<0;
			}
		}else {
			cout <<0<<0<<0;
		}
	}else {
		cout <<0<<0<<0<<0;
	}
}  