#include<bits/stdc++.h>
using namespace std;
int a,b,cnt=0;
char c[1005],d[1005];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a;
	for(int i=1;i<=3;i++){
		cin>>c[i];
	}
	cin>>b;
	for(int i=1;i<=3;i++){
		cin>>d[i];
	}
	for(int i=1;i<=2;i++){
		if(c[i]==d[i]){
			cnt++;
		}	
	}
	if(a==b){
		cout<<"1";
	}else{
		cout<<"0";
	}
	
	if(a==b){
		if(cnt==2){
			cout<<"1";
		}else{
			cout<<"0";
		}
		if(cnt==2){
			if(c[3]=='A'){
				if(d[3]=='B'){
					cout<<"1";	
				}
				else if(d[3]=='C'){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}
			if(c[3]=='B'){
				if(d[3]=='A'){
					cout<<"1";	
				}
				else if(d[3]=='C'){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}
			if(c[3]=='C'){
				if(d[3]=='B'){
					cout<<"1";	
				}
				else if(d[3]=='A'){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}
			if(c[3]=='D'){
				if(d[3]=='F'){
					cout<<"1";	
				}else{
					cout<<"0";
				}
		
			}
			if(c[3]=='F'){
				if(d[3]=='D'){
					cout<<"1";	
				}else{
					cout<<"0";
				}
		
			}
			if(c[3]=='A'){
				if(d[3]=='B'){
					cout<<"1";	
		
		
				}else{
					cout<<"0";
				}
			}
			if(c[3]=='B'){
				if(d[3]=='A'){
					cout<<"1";	
				}
				else if(d[3]=='C'){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}
			if(c[3]=='C'){
				if(d[3]=='B'){
					cout<<"1";	
		
		
				}else{
					cout<<"0";
				}
			}
			if(c[3]=='D'){
				if(d[3]=='F'){
					cout<<"1";	
		
		
				}else{
					cout<<"0";
				}
			}
			if(c[3]=='F'){
				if(d[3]=='D'){
					cout<<"1";	
		
		
				}else{
					cout<<"0";
				}
			}	
		}else{
			cout<<"0"<<"0";
		}
	}else{
		cout<<"0"<<"0"<<"0";
	}
	
	return 0;
} 
