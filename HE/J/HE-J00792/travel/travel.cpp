#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(c1==c2){
		bool q=1;
		for(int i=0;i<2;i++){
			if(s1[i]!=s2[i]){
				q=0;
			}
		}
		if(q==1){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	else
	{
		cout<<0;
	}
	if(c1==c2){
		bool q=1;
		for(int i=0;i<2;i++){
			if(s1[i]!=s2[i]){
				q=0;
			}
		}
		if(q==1){
			if(q==1){
			bool p=0;
			if((s1[2]<='C'&&s1[2]>='A'&&s2[2]<='C'&&s2[2]>='A')||(s1[2]<='F'&&s1[2]>='D'&&s2[2]<='F'&&s2[2]>='D')){
				p=1;
			}
			if(p==1){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
		if(c1==c2){
		bool q=1;
		for(int i=0;i<2;i++){
			if(s1[i]!=s2[i]){
				q=0;
			}
		}
		if(q==1){
			if(q==1){
			bool p=0;
			bool a=(s1[2]<='C'&&s1[2]>='A'&&s2[2]<='C'&&s2[2]>='A');
			bool b=(s1[2]<='F'&&s1[2]>='D'&&s2[2]<='F'&&s2[2]>='D');
			if(a||b){
				p=1;
			}
			if(p==1){
				if(a==true){
					if((s1[2]+1==s2[2])||(s1[2]-1==s2[2])){
						cout<<1;
					}
					else{
						cout<<0;
					}
				}
				else if(b==true){
					if((s1[2]+2==s2[2])||(s1[2]-2==s2[2])){
						cout<<1;
					}
					else{
						cout<<0;
					}
				}
			}
			else{
				cout<<0;
			}
		}
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
	return 0;
} 
