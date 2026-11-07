#include <bits/stdc++.h>
using namespace std;
int a,c; 
char b[10],d[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(d[0]-48==b[0]-48&&d[1]-48==b[1]-48){
			cout<<1;
			if((b[2]=='F'&&d[2]=='D')||(b[2]=='D'&&d[2]=='F')){
				cout<<11;
				return 0; 
			}else if((b[2]=='A'&&d[2]=='B')||b[2]=='B'&&d[2]=='A'  ||b[2]=='C'&&d[2]=='B'||b[2]=='B'&&d[2]=='C'){
				cout<<11;
				return 0; 
			}else if(b[2]=='C'&&d[2]=='A'||b[2]=='A'&&d[2]=='C'){
				cout<<10;
				return 0;  
			}else{
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	
	
	return 0; 
}