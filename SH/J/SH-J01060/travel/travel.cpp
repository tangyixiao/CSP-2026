#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string trr,trx,ser,sex;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>trr>>ser>>trx>>sex;
	if(trr==trx){
		cout<<"1";
		if(ser[0]==sex[0]&&ser[1]==sex[1]){
			cout<<"1";
			if(ser[2]-sex[2]<=2||sex[2]-ser[2]<=2){
				if(ser[2]=='C'&&sex[2]=='D'||
					ser[2]=='D'&&sex[2]=='C'){
						cout<<"00";
					}
					else cout<<"1";
				if(ser[2]=='D'&&sex[2]=='F'||
				ser[2]=='F'&&sex[2]=='D'||
				ser[2]-sex[2]==1||sex[2]-ser[2]==1){
					if(ser[2]=='C'&&sex[2]=='D'||
					ser[2]=='D'&&sex[2]=='C'){
					}	
					else cout<<"1"; 
				}
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
