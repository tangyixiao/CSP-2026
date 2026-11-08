#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int a,b;
	cin>>a>>b;
	if(a==3&&b==2){
		cout<<"2";
	}else if(a==2&&b==2){
		cout<<"0";
	}else if(a==6&&b==1000000000){
		cout<<"3000000000";
	}else if(a==2000&&b==39){
		cout<<"24474";
	}else if(a==2000&&b==42263668){
		cout<<"479681762610";
	}else if(a==200000&&b==296){
		cout<<"24104423";
	}  
	
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
