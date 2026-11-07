#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c[4];
	int setting[2];
	for(int i=0;i<4;i++){
		cin>>c[i];
	}
	if(c[0]==c[2]){
		cout<<1;
		if(c[1][0]==c[3][0] && c[1][1]==c[3][1]){
			cout<<1;
			if(c[1][2]=='A'){
				setting[0]=1;
			}
			else if(c[1][2]=='B'){
				setting[0]=2;
			}
			else if(c[1][2]=='C'){
				setting[0]=3;
			}
			else if(c[1][2]=='D'){
				setting[0]=4;
			}
			else if(c[1][2]=='E'){
				setting[0]=6;
			}
			else{
				setting[0]=7;
			}
			if(c[3][2]=='A'){
				setting[1]=1;
			}
			else if(c[3][2]=='B'){
				setting[1]=2;
			}
			else if(c[3][2]=='C'){
				setting[1]=3;
			}
			else if(c[3][2]=='D'){
				setting[1]=4;
			}
			else if(c[3][2]=='E'){
				setting[1]=6;
			}
			else{
		
				setting[1]=7;
			}
			if(setting[0]+setting[1]<5 || setting[0]+setting[1]==13){
				cout<<1;
				if(setting[0]+setting[1]==3 || setting[0]+setting[1]==5 || setting[0]+setting[1]==13){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				for(int i=0;i<2;i++){
					cout<<0;
				}
			}
		}
		else{
			for(int i=0;i<3;i++){
				cout<<0;
			}
		}
	}
	else{
		for(int i=0;i<4;i++){
			cout<<0;
		}
	}
	return 0;
}
