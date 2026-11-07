#include <bits/stdc++.h>
using namespace std;
string zwr[3],zwx[3];
int rzy,xzy,cxr,cxx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cxr;
	for(int i=0;i<3;i++){
		cin>>zwr[i];
	}
	cin>>cxx;
	for(int i=0;i<3;i++){
		cin>>zwx[i];
	}
	if(zwr[2]=="A" && zwr[2]=="B" && zwr[2]=="C"){
		rzy=1;
	}
	else{
		rzy=0;
	}
	if(zwx[2]=="A" && zwx[2]=="B" && zwx[2]=="C"){
		xzy=1;
	}
	else{
		xzy=0;
	}
	if(cxr==cxx){
		cout<<"1";
		
		if(zwr[0]==zwx[0] && zwr[1]==zwx[1]){
			cout<<"1";
			if(rzy==xzy){
				cout<<"1";
				
				if(zwr[2]=="A" && zwx[2]=="B"){
					cout<<"1";
				}
				if(zwr[2]=="B" && zwx[2]=="A"){
					cout<<"1";
				}
				if(zwr[2]=="B" && zwx[2]=="C"){
					cout<<"1";
				}
				if(zwr[2]=="C" && zwx[2]=="B"){
					cout<<"1";
				}
				if(zwr[2]=="D" && zwx[2]=="F"){
					cout<<"1";
				}
				if(zwr[2]=="F" && zwx[2]=="D"){
					cout<<"1";
				}
				
				if(zwr[2]=="A" && zwx[2]=="C"){
					cout<<"0";
				}
				if(zwr[2]=="C" && zwx[2]=="A"){
					cout<<"0";
				}
				
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
		
	}
	else{
		cout<<"0000";
	}
	
	return 0;
}
