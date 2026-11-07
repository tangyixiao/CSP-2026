#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,s1,s2,s3,s4;
	cin>>c1>>s1>>s2>>c2>>s3>>s4;
	if(c1==c2){
		cout<<1<<endl;
	}else{
		cout<<0000;
	}
	if(s1==s2){
		cout<<1<<endl;
	}else{
		cout<<0;
	}
	if(s3<=67 && s4<=67 || s3>=68 && s4>=68){
		cout<<1<<endl;
	}else{
		cout<<0;
	}
	if(s3+1=s4||s3-1=s4||s4+1=s3||s4-1=s3){
		cout<<1;
	}else{
		cout<<0;
	}
	

	fclose(stdin);
	fclose(stdout);
	
	
	return 0;
}













