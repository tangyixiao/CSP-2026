#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		int n1=(s1[0]-'0')*10+(s1[1]-'0');
		int n2=(s2[0]-'0')*10+(s2[1]-'0');
		char d1=s1[2],d2=s2[2];
		int flag=0;
		if(n1==n2){
			cout<<1;
			flag=1;
		}else{
			cout<<0;
		}
		if (flag==1){
			if((d1=='A'||d1=='B'||d1=='C'&&d2=='A'||d2=='B'||d2=='C')||(d1=='D'||d1=='F'&&d2=='D'||d2=='F')){
				cout<<1;
			}else{
				cout<<0;
			}
			if(d1=='A'&&d2=='B'){
				cout<<1;
			}else if(d1=='B'&&(d2=='A'||d2=='C')){
				cout<<1;
			}else if(d1=='C'&&d2=='B'){
				cout<<1;
			}else if((d1=='D'&&d2=='F')||(d1=='F'&&d2=='D')){
				cout<<1;
			}else{
				cout<<0;
			}		
		}else{
			cout<<0<<0;
		}		
	}else{
		cout<<0<<0<<0<<0;
	}
	
	return 0;
} 
