#include<bits/stdc++.h>
using namespace std;
string aseat,bseat,acar,bcar; 
int aside,bside;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>acar>>aseat>>bcar>>bseat;
	if(aseat[2]=='A'||aseat[2]=='B'||aseat[2]=='C')
		aside=1;
	if(aseat[2]=='D'||aseat[2]=='F')
		aside=2;
	if(bseat[2]=='A'||bseat[2]=='B'||bseat[2]=='C')
		bside=1;
	if(bseat[2]=='D'||bseat[2]=='F')
		bside=2;
	if(acar!=bcar){
		cout<<"0000";
	}
	else{
		if(aseat[0]!=bseat[0]||aseat[1]!=bseat[1]){
			cout<<"1000";
		}
		else{
			if(aside!=bside){
				cout<<"1100";
			}
			else{
				if(aside==1){
					if(abs(aseat[2]-bseat[2])!=1){
						cout<<"1110";
					}
					else cout<<"1111";
				}
				else cout<<"1111";
			}
		}
	}
	return 0;
} 
