#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000"<<endl;
		return 0;
	}
	string n1="",n2="";
	n1+=s1[0];
	n1+=s1[1];
	n2+=s2[0];
	n2+=s2[1];
	if(n1==n2){
		cout<<1;
	}else{
		cout<<"000"<<endl;
		return 0;
	}
	if(s1[2]<'D'&&s2[2]<'D'||s1[2]>'C'&&s2[2]>'C'){
		cout<<1;
	}else{
		cout<<"00"<<endl;
		return 0;
	}
	if(abs(s1[2]-s2[2])==1){
		cout<<1;
	}else{
		cout<<0;
	}cout<<endl;
	return 0;
} 
