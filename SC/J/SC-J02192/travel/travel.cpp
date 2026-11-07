#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,a1,b1;
	string c,d;
	cin>>a>>a1>>c>>b>>b1>>d;
	if(a==b){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(a1==b1){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(((c=="A" or c=="B" or c=="C") && (d=="A" or d=="B" or d=="C")) || ((c=="D" or c=="F") && (d=="D" or d=="F"))){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if((c=="D" or c=="F") && (d=="D" or d=="F")){
		cout<<"1";
	}else if((c=="A" or c=="B") && (d=="A" or d=="B")){
		cout<<"1";
	}else if((c=="B" or c=="C") && (d=="B" or d=="C")){
		cout<<"1";
	}else{
		cout<<"0";
	} 
	return 0;
}