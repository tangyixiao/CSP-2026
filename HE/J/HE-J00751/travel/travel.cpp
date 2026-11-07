#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,aa,bb;
	string answe;
	cin>>a>>b>>aa>>bb;
	if(a==aa){
		answe+='1';
	}else{
		answe+='0';
	}
	if(answe[0]=='0'){
		answe+='0';
	}else if(b[0]==bb[0]&&b[1]==bb[1]){
		answe+='1';
	}else{
		answe+='0';
	}
	if(answe[1]=='0'){
		answe+='0';
	}else if((b[2]<='C'&&bb[2]<='C')||(b[2]>'C'&&bb[2]>'C')){
		answe+='1';
	}else{
		answe+='0';
	}
	if(answe[2]=='0'){
		answe+='0';
	}else if(b[2]+1!=bb[2]){
		answe+='0';
	}else{
		answe+='1';
	}
	cout<<answe;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
