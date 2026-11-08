#include<bits/stdc++.h>
using namespace std;
string s1;
string s2;
string s3;
string s4;
int n=0,m=0,a=0,b=0,c=0,d=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
cin>>s1>>s2>>s3>>s4;
	for(int i=0;i<s1.size();i++){
		n+=s1[i];
	}
	for(int i=0;i<s3.size();i++){
		m+=s3[i];
	}
	for(int i=0;i<s2.size()-1;i++){
		a+=s2[i];
	}
	for(int i=0;i<s4.size()-1;i++){
		b+=s4[i];
	}
	if(m==n&&a==b){
		cout<<11;
	for(int i=0;i<s2.size();i++){
		for(int j=0;j<s4.size();j++){
		if(s2[i]>='A'&&s2[i]<='E'&&s4[j]>='A'&&s4[j]<='E'){
			if(s2[i]>='A'&&s2[i]<='C'&&s4[j]>='A'&&s4[j]<='C'){
				cout<<1;
				if(s4[j]-s2[i]==1){
					cout<<1;
				}
			else{
				cout<<0;
				}				
			}
			else{
				cout<<"00";
			}
			if(s2[i]>='D'&&s2[i]<='E'&&s4[j]>='D'&&s4[j]<='E'){
				cout<<1;
				if(s4[j]-s2[i]==1){
					cout<<1;	
				}	
				else{
					cout<<0;
				}
			}
			}
		}
	}		
}
	if(m!=n){
		cout<<"0000";
	}
	if(m==n&&a!=b){
		cout<<1000;
	}
	return 0;
}
