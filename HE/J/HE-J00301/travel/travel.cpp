#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	bool sfx=0,sfc=0,sfp=0;
	if(a==c){
		sfx=1;
		cout<<'1';
	}
	else{
		cout<<'0';
	}
	if(sfx){
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<'1';
			sfp=1;
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<'0';
	}
	if(sfp){
		if(b[2]=='A'||b[2]=='B'||b[2]=='C'){
			if(d[2]=='A'||d[2]=='B'||d[2]=='C'){
				cout<<'1';
				sfc=1;
			}
			else{
				cout<<'0';
			}
		}
		else{
			if(d[2]=='D'||d[2]=='F'){
				cout<<'1';
				sfc=1;
			}
			else{
				cout<<'0';
			}
		}
	}
	else{
		cout<<'0';
	}
	if(sfc){
		switch(b[2]){
			case 'A':if(d[2]=='B'){cout<<'1';}else{cout<<'0';}break;
			case 'B':if(d[2]=='A'||d[2]=='C'){cout<<'1';}else{cout<<'0';}break;
			case 'C':if(d[2]=='B'){cout<<'1';}else{cout<<'0';}break;
			case 'D':if(d[2]=='F'){cout<<'1';}else{cout<<'0';}break;
			case 'F':if(d[2]=='D'){cout<<'1';}else{cout<<'0';}break;
		}
	}
	else{
		cout<<'0';
	}
	return 0;
}
