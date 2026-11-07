#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,c1,s,s1;
	cin>>c>>c1>>s>>s1;
	if(s==c){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}string s11="",c11="";
	s11+=s1[2];c11+=c1[2];
	string c111="",s111="";
	c111+=c1[0];c111+=c1[1];s111+=s1[0];s111+=s1[1];
	if(c111==s111){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	
	
	
	
	if(c11=="C" and s11=="D" or s11=="C" and c11=="D"){
		cout<<00;
		return 0;
	}else{
		cout<<1;
	}
	char n,m;
	n=s11[0];
	m=c11[0];
    n=int(n);
    m=int(m);
    if(min(n,m)+1==max(m,n)){
    	cout<<1;
	}else{
		cout<<0;
	}
	
	return 0;
	 
} 

