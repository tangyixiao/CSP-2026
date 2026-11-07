#include<bits/stdc++.h>
using namespace std;
int main(){

	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	if(a=c&&b-d==0){
		cout<<"1111"<<endl;
	}
	if(a!=c&&b-d!=0){
		cout<<"0000"<<endl;
	}
	if(a=c&&b-d!=0){
		cout<<"1000"<<endl;
	}
	
	
	     
	
	
	return 0;
} 
