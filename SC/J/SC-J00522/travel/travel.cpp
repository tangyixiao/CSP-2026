#include<bits/stdc++.h>
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	
	
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	int r1=s1[2]-'A';
	int r2=s2[2]-'A';
	if((r1<=2&&r2<=2)||(r1>2&&r2>2)){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if(abs(r1-r2)==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}