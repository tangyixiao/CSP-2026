#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int f1=0,f2=0;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i]){
			f1=1;
		}
	}
	if(f1!=0){
		cout<<0<<0<<0<<0;
		return 0;
	}
	cout<<1;
	
	
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			f2=1;
		}
	}
	if(f2!=0){
		cout<<0<<0<<0;
		return 0; 
	}
	cout<<1;
	
	
	if(s1[2]=='D'||s1[2]=='F'){
		if(s2[2]!='D'&&s2[2]!='F'){
			cout<<0<<0;
		}
		else{
			cout<<1<<1;
		}
	}
	else{
		if(s1[2]=='A'){
			if(s2[2]=='B'){
				cout<<1<<1;
			}
			else if(s2[2]=='C'){
				cout<<1<<0;
			}
			else{
				cout<<0<<0;
			}
		}
		else if(s1[2]=='C'){
			if(s2[2]=='B'){
				cout<<1<<1;
			}
			else if(s2[2]=='A'){
				cout<<1<<0;
			}
			else{
				cout<<0<<0;
			}
		}
		else{
			if(s2[2]!='D' && s2[2]!='F'){
				cout<<1<<1;
			}
			else{
				cout<<0<<0;
			}
		}
	}
	return 0;
} 
