#include <bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	
	char c[4],s[6];
	cin>>c[1]>>c[2]>>s[1]>>s[2]>>s[3];
	cin>>c[3]>>c[4]>>s[4]>>s[5]>>s[6];
	int a[100]={0},b[100]={0};
	if(c[1]==c[3] && c[2]==c[4]){
		cout<<1;
		if(s[1]==s[4] && s[2]==s[5]){
			cout<<1;
			if(s[3]=='A' && s[6]=='C' ){
				cout<<1<<0;
			}else if(s[3]=='B' && s[6]=='C' ){
				cout<<1<<1;
			}else if(s[3]=='C' && s[6]=='A' ){
				cout<<1<<0;
			}else if(s[3]=='D' && s[6]=='F'){
				cout<<1<<1;
			}else if(s[3]=='F' && s[6]=='D'){
				cout<<1<<1;
			}else if(s[3]=='A' && s[6]=='C' ){
				cout<<1<<0;
			}else if(s[3]=='A' && s[6]=='B' ){
				cout<<1<<1;
			}else if(s[3]=='B' && s[6]=='A' ){
				cout<<1<<1;
			}else if(s[3]=='C' && s[6]=='B' ){
				cout<<1<<1;
			}else{
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
		
	}else{
		cout<<0<<0<<0<<0;
	}
		
		
	
	
	
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
