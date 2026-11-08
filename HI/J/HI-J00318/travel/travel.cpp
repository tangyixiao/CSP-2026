#include<bits/stdc++.h>
using namespace std;
string n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a=0,b=0;
	cin>>a>>n>>b>>m;
	if(a==b){
		cout<<1;
		if(m[1]==n[1]){
			if(m[0]==n[0]){
				cout<<1;
				if(m[2]=='A'||m[2]=='B'||m[2]=='C'){
					if(n[2]=='A'||n[2]=='B'||n[2]=='C'){
						cout<<1;
						if(m[2]==n[2]+1||m[2]==n[2]-1){
							cout<<1;
							return 0;
						}else{
							cout<<"0";
							return 0;
						}
					}else{
						cout<<"00";
						return 0;
					}
				}else if(m[2]=='F'||m[2]=='D'){
					if(n[2]=='F'||n[2]=='D'){
						cout<<1;
						if(m[2]==n[2]+1||m[2]==n[2]-1){
							cout<<1;
							return 0;
						}else{
							cout<<"0";
							return 0;
						}
					}
					else{
						cout<<"00";
						return 0;
					}
				}else{
					cout<<"00";
					return 0;
				}
			}
			else{
				cout<<"000";
				return 0;
			}
		}
		else{
			cout<<"000";
			return 0;
		}
		
	}
	else{
		cout<<"0000";
	}
	
	return 0;
}
