#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	
	
	string a="",b="";
	for(int i=0;i<2;i++){
		a[i]=s1[i];
		b[i]=s2[i];
	}
	if(a==b){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	
	
	if(a==b){
		if(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))){
			cout<<1;
		}else{
			cout<<"00";
			return 0;
		}
	}
	
	
	int w=(int)(s1[2]-s2[2]);
	if(w<0){
		w=0-w;
	}
	if(w==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
