#include<bits/stdc++.h>
using namespace std;
char c1[10],c2[10],c3[10],c4[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>c1>>c2>>c3>>c4;
	for(int i=0;i<2;i++){
		if(c1[i]!=c3[i]){
			cout<<"0000";
			return 0;
		}
	}
	for(int i=0;i<2;i++){
		if(c2[i]!=c4[i]){
			cout<<"1000";
			return 0;
		}
	}
	if((c2[2]=='A'&&c4[2]=='C')||(c2[2]=='C'&&c4[2]=='A')){
		cout<<"1110";
	}
	else if((c2[2]=='A'&&c4[2]=='B')||(c2[2]=='B'&&c4[2]=='A')||(c2[2]=='B'&&c4[2]=='C')||(c2[2]=='C'&&c4[2]=='B')){
		cout<<"1111";
	}
	else if((c2[2]=='D'&&c4[2]=='F')||(c2[2]=='F'&&c4[2]=='D')){
		cout<<"1111";
	}
	else{
		cout<<"1100";
	}
	return 0; 
} 
