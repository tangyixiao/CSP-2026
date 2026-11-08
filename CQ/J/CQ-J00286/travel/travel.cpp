#include<bits/stdc++.h>
using namespace std;
string c1,c2;
string se1,se2;
bool pd(string s){
	if(s[2]<='C')return 1;
	return 0;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>se1>>c2>>se2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}else{
		cout<<"1";
	}
	if(se1[0]+se1[1]==se2[0]+se2[1]){
		cout<<"1";
		if(pd(se1)==pd(se2)){
			cout<<"1";
		}else{
			cout<<"0"; 
		} 
	}else{
		cout<<"00";
	}
	if(pd(se1)==pd(se2)){
		if(se1[0]+se1[1]==se2[0]+se2[1]){
			if( abs(se2[2]-se1[2]) == 1){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0"; 
	} 
	return 0;
}
