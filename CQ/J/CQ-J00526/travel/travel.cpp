#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	
	a1+=s1[0];
	a1+=s1[1];
	a2+=s2[0];
	a2+=s2[1];
	if(a1==a2){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	
	if(s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s1[2]>='D'){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	
	char ch1=s1[2],ch2=s2[2];
	if(ch1>ch2){
		swap(ch1,ch2);
	}
	if(ch1=='A'&&ch2=='B'||ch1=='B'&&ch2=='C'||ch1=='D'&&ch2=='F'){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
