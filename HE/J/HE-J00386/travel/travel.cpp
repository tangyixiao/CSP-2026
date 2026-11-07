#include<bits/stdc++.h>
using namespace std;
long long c1,c2;
string s1,s2;
bool b1=0,b2=0,b3=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		b1=1;
		cout<<1;
	}
	else{
		b1=0;
		cout<<0;
	}
	
	if(b1==0){
		cout<<0;
	}
	else if(b1==1){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			b2=1;
			cout<<1;
		}
		else{
			b2=0;
			cout<<0;
		}
	}
	
	if(b2==0){
		cout<<0;
	}
	else if(b2==1){
			if((s1[0]==s2[0]&&s1[1]==s2[1])){
				if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
					if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
						cout<<1;
						b3=1;
					}
					else{
						b3=0;
						cout<<0;
					}
				}
			if(s1[2]=='D'||s1[2]=='F'){
				if(s2[2]=='D'||s2[2]=='F'){
					cout<<1;
					b3=1;
				}
				else{
					b3=0;
					cout<<0;
				}
			}
		}
		else{
			b3=0;
			cout<<0;
		}
	}

	if(b3==0)
	{
		cout<<0;
	}
	else if(b3==1){
		if(s1[2]=='A'){
			if(s2[2]=='B'){
				cout<<1;
			}
			else cout<<0;
		}
		if(s1[2]=='B'){
			if(s2[2]=='A'||s2[2]=='C'){
				cout<<1;
			}
			else cout<<0;
		}
		if(s1[2]=='C'){
			if(s2[2]=='B'){
				cout<<1;
			}
			else cout<<0;
		}
		if(s1[2]=='D'){
			if(s2[2]=='F'){
				cout<<1;
			}
			else cout<<0;
		}
		if(s1[2]=='F'){
			if(s2[2]=='D'){
				cout<<1;
			}
			else cout<<0;
		}
	}
	else{
		cout<<0;
	}
	return 0;
} 
