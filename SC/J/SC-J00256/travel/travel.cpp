#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);	
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	
		if((a[1]!=c[1])||(a[0]!=c[0])){
			cout<<0<<0<<0<<0;
		} 
	
	
		if(a[1]==c[1]){
			if(a[0]==c[0]){
				cout<<1;
				if(b[0]==d[0]){
					if(b[1]==d[1]){
						cout<<1;
						if((int(b[2])<=67&&int(d[2])>=68)||(int(b[2])>=68&&int(d[2])<=67)){
							cout<<0<<0;
						}
						else{
							cout<<1;
							if((int(b[2])==65&&int(d[2]==67))||(int(b[2])==67)&&(int(d[2])==65)){
								cout<<0;
							}
							else cout<<1;
						}
					}
				}
		}
	} 
	
	if(a[1]==c[1]){
		if(a[0]==c[0]){
			 if((b[0]!=d[0])||(b[1]!=d[1])){
					cout<<0<<0<<0;
			}		
		}
	}
		
	
	return 0;
} 