#include<bits/stdc++.h>
using namespace std;
bool check1(char hao1,char hao2){
	if(hao1=='A'){
		if(hao2=='B'||hao2=='C'){
			return 1;
		}
	}
	if(hao1=='B'){
		if(hao2=='A'||hao2=='C'){
			return 1;
		}
	}
	if(hao1=='C'){
		if(hao2=='A'||hao2=='B'){
			return 1;
		}
	}
	if(hao1=='D'){
		if(hao2=='F'){
			return 1;
		}
	}
	if(hao1=='F'){
		if(hao2=='D'){
			return 1;
		}
	}
	return 0;
}
bool check2(char hao1,char hao2){
	if(hao1=='A'){
		if(hao2=='B'){
			return 1;
		}
	}
	if(hao1=='B'){
		if(hao2=='A'||hao2=='C'){
			return 1;
		}
	}
	if(hao1=='C'){
		if(hao2=='B'){
			return 1;
		}
	}
	if(hao1=='D'){
		if(hao2=='F'){
			return 1;
		}
	}
	if(hao1=='F'){
		if(hao2=='D'){
			return 1;
		}
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string che_r,wei_r,che_x,wei_x;
	cin>>che_r>>wei_r>>che_x>>wei_x;
	if(che_r!=che_x){
		cout<<"0000";
	}
	else{
		cout<<"1";
		string pai_r=wei_r.substr(0,2),pai_x=wei_x.substr(0,2);
		if(pai_r==pai_x){
			cout<<"1";
			char hao_r=wei_r[2],hao_x=wei_x[2];
			if(check1(hao_r,hao_x)){
				cout<<"1";
				if(check2(hao_r,hao_x)){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	return 0;
}
