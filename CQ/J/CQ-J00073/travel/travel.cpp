#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	
	string a,a1,b,b1;
	cin>>a>>a1>>b>>b1; 
	
	if(a==b){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	
	if(a1[0]==b1[0]&&a1[1]==b1[1]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	
	char x=b1[2],y=a1[2];
	if((x>='A'&&x<='C'&&y>='A'&&y<='C')||(x>='D'&&x<='E'&&y>='D'&&y<='E')){
		cout<<"1";
	}else{
		cout<<"00";
		return 0; 
	}
	
	if(x==y+1||x==y-1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}

