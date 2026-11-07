#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,temp1,temp2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	temp1=s1.substr(0,2),temp2=s2.substr(0,2);
	if(temp1!=temp2){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	if(!((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s1[2]>'C'))){
		cout<<"00";
		return 0; 
	}
	cout<<"1";
	if(int(abs(s1[2]-s2[2])!=1)){
		cout<<"0";
		return 0;
	}
	cout<<"1";
	return 0;
}//guaguabaoyou 
