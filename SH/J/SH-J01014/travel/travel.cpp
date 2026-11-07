#include<bits/stdc++.h>
using namespace std;
string a,b,x,y;
int ok=0,p=0;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>a>>b>>x>>y;
	
	if(a==x) cout<<1;///////////
	else cout<<0;
	
	if(b[0]==y[0] && b[1]==y[1] && a==x){
		cout<<1;///////////
		ok=1;
	}else cout<<0;
	
	if(b[0]==y[0] && b[1]==y[1] && a==x){
		if(b[2]=='A' || b[2]=='B' || b[2]=='C'){
			if(y[2]=='A' || y[2]=='B' || y[2]=='C'){
				cout<<1;/////////////
				p=1;
			}else cout<<0;
		}else if(b[2]=='D' || b[2]=='F'){
			if(y[2]=='D' || y[2]=='F'){
				cout<<1;////////////////
				p=1;
			}else cout<<0;
		}
	}else cout<<0;
	
	if(p==1){
		if(b[2]=='A'){
			if(y[2]=='B'){
				cout<<1;/////////////
				return 0;
			}
		}else if(b[2]=='B'){
			if(y[2]=='A' || y[2]=='C'){
				cout<<1;////////////
				return 0;
			}
		}else if(b[2]=='C'){
			if(y[2]=='B'){
				cout<<1;/////////////////
				return 0;
			}
		}else if(b[2]=='D'){
			if(y[2]=='F'){
				cout<<1;/////////////////
				return 0;
			}
		}else if(b[2]=='F'){
			if(y[2]=='D'){
				cout<<1;//////////////
				return 0;
			}
		}
	}else{
		cout<<0;
		return 0;
	}
	cout<<0;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
