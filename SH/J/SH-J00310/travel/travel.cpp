#include<bits/stdc++.h>
using namespace std;

string a,b;
char a1[4],b1[4];

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a;
	cin>>a1[0]>>a1[1]>>a1[2];
	cin>>b;
	cin>>b1[0]>>b1[1]>>b1[2];
	if(a==b){
		cout<<"1";
		if(a1[1]==b1[1]){
			cout<<"1";
			
			if((a1[2]=='A' || a1[2]=='B' || a1[2]=='C') && (b1[2]=='A' || b1[2]=='B' || b1[2]=='C')){
				cout<<"1";
				if((abs(a1[2]-b1[2])==1 && !(a1[2]=='C' && b1[2]=='D') && !(a1[2]=='D' && b1[2]=='C')) || ((a1[2]=='D' && b1[2]=='F') || (a1[2]=='F' && b1[2]=='D'))){
					cout<<"1";
					return 0;
				}else{
					cout<<"0";
					return 0;
				}
			}else if(a1[2]=='D' || a1[2]=='F'&& b1[2]=='D' || b1[2]=='F'){
				cout<<"1";
				if((abs(a1[2]-b1[2])==1 && !(a1[2]=='C' && b1[2]=='D') && !(a1[2]=='D' && b1[2]=='C')) || ((a1[2]=='D' && b1[2]=='F') || (a1[2]=='F' && b1[2]=='D'))){
					cout<<"1";
					return 0;
				}else{
					cout<<"0";
					return 0;
				}
				
			}else{
				cout<<"00";
				return 0;
			}
			
			
		}else{
			cout<<"000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}

} 
