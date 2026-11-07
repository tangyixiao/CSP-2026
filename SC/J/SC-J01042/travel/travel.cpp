#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	string a_1,a_2;
	string b_1,b_2;
	cin>>a_1>>a_2>>b_1>>b_2;
	if(a_1==b_1){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(a_2[0]==b_2[0]&&a_2[1]==b_2[1]){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if(((a_2[2]>='A'&&a_2[2]<='C')&&(b_2[2]>='A'&&b_2[2]<='C'))||a_2[2]>='D'&&a_2[2]<='E'&&b_2[2]>='D'&&b_2[2]<='E'){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if((a_2[2]-b_2[2]==1||a_2[2]-b_2[2]==-1)&&(a_2[2]!='D'&&b_2[2]!='C')&&(a_2[2]!='C'&&b_2[2]!='D')){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0; 
}  