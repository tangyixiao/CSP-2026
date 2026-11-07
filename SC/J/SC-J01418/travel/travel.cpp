#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("travel.in","r","stdin");
	freopen("travel.out","w","stdout");
	int c,c1;
	string s,s1;
	cin>>c>>s>>c1>>s1;
	if(c==c1){
		cout<<1;
	}
	else{
		cout<<0;
	}
    int n=0,n1=0;
    for(int i=s.size()-2;(s[i]>='0'||s[i]<='9')&&i>=0;i--){
    	n=n+(s[i]-'0')*10;
	}
	for(int i=s1.size()-2;(s1[i]>='0'||s1[i]<='9')&&i>=0;i--){
    	n1=n1+(s1[i]-'0')*10;
	}
	if(n==n1){
		cout<<1;
		int i=s.size()-1;
		if(s[i]>s1[i]){
			if(s[i]-s1[i]==1){
				if((s[i]=='D'||s[i]=='C')&&(s1[i]=='D'||s1[i]=='C')){
					cout<<0<<0;
				}
				else{
					cout<<1<<1;
				}
			}
			else if(s[i]<'D'&&s1[i]<'D'){
				cout<<1<<0;	
			}
			else{
				cout<<0<<0;
			}
		}
		else{
		if(s1[i]-s[i]==1){
				if((s[i]=='D'||s[i]=='C')&&(s1[i]=='D'||s1[i]=='C')){
					cout<<0<<0;
				}
				else{
					cout<<1<<1;
				}
			}
			else if(s[i]<'D'&&s1[i]<'D'){
				cout<<1<<0;	
			}
			else{
				cout<<0<<0;
			}
			
		}
	}
	else{
		cout<<0<<0<<0;
	}
}