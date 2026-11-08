#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	for(int i=0;i<2;i++){
		if(s1[i]!=s3[i]){
			cout<<0<<0<<0<<0;
			return 0;
		}
	}
	cout<<1;
	for(int i=0;i<=1;i++){
		if(s2[i]!=s4[i]){
			cout<<0<<0<<0;
			return 0;
		}
	}
	cout<<1;
	if(s2[2]<='C'&&s4[2]>='D'||s2[2]<='C'&&s2[2]>='D'){
		cout<<0<<0;
		return 0;
	}
	cout<<1;
	if(s2[2]-s3[2]==1||s4[2]-s2[2]==1){
		cout<<1;
		return 0;
	}
	cout<<0;
	return 0;
} 
