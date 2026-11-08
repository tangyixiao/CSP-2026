#include<bits/stdc++.h>

using namespace std;

string xianga,hanga;
string xiangb,hangb;

int ce(char a,char b){
	if(a=='A' || a=='B' || a=='C'){
		if(b=='A' || b=='B' || b=='C'){
			return 1;
		}
	}
	else{
		if(b=='D' || b=='F'){
			return 1;
		}
	}
	return 0;
}

int ling(char a,char b){
	if(a=='A' || a=='B' || a=='C'){
		if(a-b==1 || a-b==-1){
			if(a!='C' || b!='D'){
				return 1;
			}
		}
	}
	else{
		if(b=='D' || b=='F'){
			return 1;
		}
	}
	return 0;
} 

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>xianga>>hanga>>xiangb>>hangb;
	char zuoa=hanga[2];
	char zuob=hangb[2];
	hanga=hanga[0]+hanga[1];
	hangb=hangb[0]+hangb[1];
	if(xianga==xiangb){
		cout<<'1';
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(hanga==hangb){
		cout<<'1'; 
	}
	else{
		cout<<"000";
		return 0;
	}
	if(ce(zuoa,zuob)){
		cout<<'1';
	}
	else{
		cout<<"00";
		return 0;
	}
	cout<<ling(zuoa,zuob);
	return 0;
} 
