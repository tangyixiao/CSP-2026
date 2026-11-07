#include<bits/stdc++.h>
using namespace std;
string s1,s2,se1,se2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>se1>>s2>>se2;
	if(s1==s2){
		cout<<"1";
		if(se1[0]==se2[0]&&se1[1]==se2[1]){
			cout<<"1";
			if((se1[2]<='C'&&se1[2]>='A'&&se2[2]<='C'&&se2[2]>='A')||(se1[2]<='F'&&se1[2]>='D'&&se2[2]<='F'&&se2[2]>='D')){
				cout<<"1";
				if(se1[2]<='C'&&se1[2]>='A'&&se2[2]<='C'&&se2[2]>='A'){
					if(se1[2]+1==se2[2]||se1[2]==se2[2]-1){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
				if(se1[2]<='F'&&se1[2]>='D'&&se2[2]<='F'&&se2[2]>='D'){
					if(se1[2]+2==se2[2]||se1[2]==se2[2]-2){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
			}
			else{
				cout<<"0"<<"0";
			}
		}
		else{
			cout<<"0"<<"0"<<"0";
		}
	}
	else{
		cout<<"0"<<"0"<<"0"<<"0";
	}
	return 0;
}