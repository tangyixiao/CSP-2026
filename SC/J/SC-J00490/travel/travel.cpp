#include <bits/stdc++.h>
using namespace std;
main(){
	freopen("travel.in","r",in);
	freopen("travel.out","w",our);
	string c1,z1,c2,z2;
	cin>>c1>>z1>>c2>>z2;
	
	if(c1==c2){
		cout<<"1";
		if(z1[0]==z2[0]&&z2[1]==z1[1]){
			cout<<"1";
			if(z1[2]<='C' && z2[2]<='C'){
		    	cout<<"1";
		  	    if(abs(z1[2]-z2[2])==1){
			    	cout<<"1";
				}else{
					cout<<"0";}
			}else if(z1[2]>='D'&&z2[2]>='D'){
				cout<<"11";
				return 0;
			}else{
				cout<<"00"; }
		}else{
		cout<<"000";}
	}else{
	cout<<"0000"; 
	}
	
	return 0;
}
	