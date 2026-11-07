#include<bits/stdc++.h>
using namespace std;
int t,l;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,a,a1;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		t=1;
		cout<<1;
	}else{
		t=0;
		cout<<0;
	}
	a=s1.substr(0,2);
	a1=s2.substr(0,2);
	if(a==a1 && t==1){
		cout<<1;
	}else{
		t=0;
		cout<<0;
	}
	if((s1[2]-'A'<=2 && s2[2]-'A'<=2) || (s1[2]-'A'>=4 && s2[2]-'A'>=4)){
		if(t==1){ 
			l=1;
			cout<<1;
		}else{
			l=1;
			t=0;
			cout<<0;
		}
	}
	if(l==0){
		t=0;
		cout<<0;
	}
	if(t==0){
		cout<<0;
	}else if(s1[2]-s2[2]==1 || s2[2]-s1[2]==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
