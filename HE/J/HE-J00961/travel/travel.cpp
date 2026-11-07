#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string ss1="",ss2="";
	for(int i=0;i<=1;i++){
		ss1+=s1[i],ss2+=s2[i];
	}
	char cs1=s1[2],cs2=s2[2];
	if(c1!=c2){
		cout<<"0000";
	}else if(ss1!=ss2){
		cout<<"1000";
	}else if((cs1<='C'&&cs2>='D')||(cs1>='D'&&cs2<='C')){
		cout<<"1100";
	}else{
		if(cs1=='A'&&cs2=='B'){
			cout<<"1111";
		}else if(cs1=='A'&&cs2=='C'){
			cout<<"1110";
		}else if(cs1=='B'&&cs2=='A'){
			cout<<"1111";
		}else if(cs1=='B'&&cs2=='C'){
			cout<<"1111";
		}else if(cs1=='C'&&cs2=='A'){
			cout<<"1110";
		}else if(cs1=='C'&&cs2=='B'){
			cout<<"1111";
		}else if(cs1=='D'&&cs2=='F'){
			cout<<"1111";
		}else if(cs1=='F'&&cs2=='D'){
			cout<<"1111";
		}
	}
	return 0;
}
