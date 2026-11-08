#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
	}

string s,k;
s=a[0][1];
k=a[1][1];
int z=0;
int q,w;
char p,o;
	for(int i=0;i<3;i++){
		if(s[i]==k[i]){
		z++;	
		}
		p=s[2];
		o=k[2];
	}
	
	
		if(a[0][0]==a[1][0]){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		if(z>=2&&a[0][0]==a[1][0]){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		if(z>=2&&a[0][0]==a[1][0]){
			if(('A'<=p&&p<='C'&&'A'<=o&&o<='C')||('D'<=p&&p<='F'&&'D'<=o&&o<='F')){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		else{
			cout<<"0";
		}
		if(z>=2&&a[0][0]==a[1][0]){
				if(p-o==1||o-p==1){
			if((p=='C'&&o=='D')||(p=='D'&&o=='C')){
				cout<<"0";
			}
			else{
				cout<<"1";
			}
		}
		else{
			cout<<"0";
		}
		}
	
		else{
			cout<<"0";
		}
		
} 
