#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int cxa,cxb;
	string zwa;
	string zwb;
	cin>>cxa>>zwa>>cxb>>zwb;
	bool threemz=0;
	if(cxa==cxb){
		cout<<"1";
		if(zwa[0]==zwb[0]&&zwa[1]==zwb[1]){
			cout<<"1";
			if(zwa[2]<='C'){
				if(zwb[2]<='C'){
					cout<<1;
					threemz=1;
				}
				else{
					cout<<"0";
				}
			}
			else if(zwa[2]>'C'){
				if(zwb[2]>'C'){
					threemz=1;
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			if(threemz){
				if(abs(zwa[2]-zwb[2])==1){
					cout<<"1";
				}
				else{
					cout<<"0";
					}
			}
			else{
				cout<<"0";
			}
			
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	
} 
