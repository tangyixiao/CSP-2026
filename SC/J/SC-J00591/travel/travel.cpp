#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,x,y;
	cin>>a>>b>>x>>y;
	if(a!=x){
		cout<<"0000";
		return 0;
	}else{
		cout<<"1";
		bool k=true;
		for(int i=0;i<2;i++){
			if(b[i]!=y[i]){
				k=false;
			}
		}
		if(k==false){
			cout<<"000";
			return 0;
		}else{
			cout<<"1";
			if((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(y[2]=='A'||y[2]=='B'||y[2]=='C')){
				cout<<"1";
				if((b[2]=='A'&&y[2]=='B')||(b[2]=='B'&&y[2]=='C')||(b[2]=='B'&&y[2]=='A')||(b[2]=='C'&&y[2]=='B')){
					cout<<"1";
					return 0;
				}else{
					cout<<"0";
					return 0;
				}
			}else if((b[2]=='D'||b[2]=='F')&&(y[2]=='D'||y[2]=='F')){
				cout<<"11";
				return 0;
			}else{
				cout<<"00";
				return 0;
			}
		}
	}
	return 0;
}