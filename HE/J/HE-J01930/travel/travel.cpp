#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int r1,x1;
	string r2,x2;
	cin>>r1;
	getline(cin,r2);
	cin>>x1;
	getline(cin,x2);
	if(r1 == x1){
		cout<<1;
	}else{
		cout<<0;
		cout<<"000";
		return 0;
	}
	
	if(r2[2] == x2 [2]){
		cout<<1;
	}else{
		cout<<0;
		cout<<"00";
		return 0;
	}
	
	if(r2[3] == 'A' || r2[3] == 'B' || r2[3] == 'C'){
		if(x2[3] != 'D' && x2[3] != 'F'){
			cout<<1;
		}else{
			cout<<0;
			cout<<"0";
		return 0;
		}
	}
	if(r2[3] == 'A' && x2[3] == 'B'){
		cout<<1;
	}else if(r2[3] == 'B' && x2[3] == 'C'){
		cout<<1;
	}else if(r2[3] == 'D' && x2[3] == 'F'){
		cout<<1;
	}else if(r2[3] == 'B' && x2[3] == 'A'){
		cout<<1;
	}else if(r2[3] == 'C' && x2[3] == 'B'){
		cout<<1;		
	}else if(r2[3] == 'F' && x2[3] == 'D'){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
