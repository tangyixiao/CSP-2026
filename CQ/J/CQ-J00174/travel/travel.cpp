#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	string d1="",d2="";
	d1+=s1[0];
	d1+=s1[1];
	d2+=s2[0];
	d2+=s2[1];
	if(d1!=d2){
		cout<<"1000";
		return 0;
	}
	d1=s1[2],d2=s2[2];
	if(("D"<=d1&&d2>="D")||(d1<="C"&&d2<="C")){
		char k1=d1[0],k2=d2[0];
		if(abs(k2-k1)==1||(k2=='F'&&k1=='D')||(k2=='D'&&k1=='F')){
			cout<<"1111";
			return 0;
		}else{
			cout<<"1110";
			return 0; 
		}
	}else{
		cout<<"1100";
		return 0;
	}
	return 0;
} 
