#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string ss,s;	
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1<<" ";
	}
	else{
		cout<<0<<" ";
	}

	for(int i=0;i<s1.size(); i++){
		for(int j=0; j<s2.size(); j++){
			if(s1[i]>='0'&&s1[i]<='18'){
				ss+=s1[i];
			}
			else if(s2[j]>='0'&&s2[j]<='18'){
				s+=s2[j];
			}
		}
	}
	if(ss==s){
		cout<<0<<" ";
	}
	else{
		cout<<1<<" ";
	}
	int a=0,b=0;
	for(int i=1;i<=s1.size(); i++){
		for(int j=1; j<=s2.size(); j++){
			if(s1[i]>='A'&&s2[j]<='C'||s1[i]<='C'&&s2[j]>='A'){
				a++;
				b++;
			}
			else if(s1[i]>='D'&&s1[i]<='F'||s2[j]<='F'&&s2[j]>='D'){
				a++;
				b++;
			}
		}
	}
	if(a==b){
		cout<<1<<" ";
	}
	else{
		cout<<0<<" ";
	}
	for(int i=1;i<=s1.size(); i++){
		for(int j=1; j<=s2.size(); j++){
			if(s1[i]=='A'&&s2[j]=='B'||
			   s1[i]=='B'&&s2[j]=='A'||
			   s1[i]=='B'&&s2[j]=='C'||
			   s1[i]=='C'&&s2[j]=='B'||
			   s1[i]=='D'&&s2[j]=='F'||
			   s1[i]=='F'&&s2[j]=='D' ){
				cout<<1<<" ";
				return 0;
			}
		}
	}
	cout<<0<<" ";
	return 0;
} 
