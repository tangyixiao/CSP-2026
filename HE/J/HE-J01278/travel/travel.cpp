#include<bits/stdc++.h> 
using namespace std;
int main(){
	int C1,C2;
	string S1,S2;
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	cin>>C1>>S1>>C2>>S2;
    
	if(C1==C2){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(S1[0]==S2[0]||S1[1]==S2[1]){
		cout<<"1";
	}else{
		cout<<"0" ;
	}
	if(S1[2]==S2[2]){
	cout<<"0";
	}else{
		cout<<"1";
	}
	if(S1[2]==S2[2]){
		cout<<"0";
	}else{
		cout<<"1";
	}
	return 0;
}

