#include<bits/stdc++.h> 
using namespace std;

int main(){

	string sum;
	string a;
	string a1;
	string b;
	string b1;
	cin>>a;
	cin>>a1;
	cin>>b;
	cin>>b1;
	if(a[0]==b[0]&&a[1]==b[1]){
		sum[1]='1';
	}else{
		sum[1]='0';
		sum[2]='0';
		sum[3]='0';
		sum[4]='0';
		cout<<sum[1]<<sum[2]<<sum[3]<<sum[4];
		return 0;
	}
	if(a1[1]==b1[1]&&a1[0]==b1[0]){
		sum[2]='1';
	}else{
		sum[2]='0';
		sum[3]='0';
		sum[4]='0';
		cout<<sum[1]<<sum[2]<<sum[3]<<sum[4];
		return 0;
	}
	if((a1[2]<='c'&&b1[2]<='c')||(a1[2]>='d'&&b1[2]>='d')){
		sum[3]='1';
	}else{
		sum[3]='0';
		sum[4]='0';
		cout<<sum[1]<<sum[2]<<sum[3]<<sum[4];
		return 0;
	}
	if(a1[2]+1==b1[2]||a1[2]-1==b1[2]){
		sum[4]='1';
	}else{
		sum[4]='0';
		cout<<sum[1]<<sum[2]<<sum[3]<<sum[4];
		return 0;
	}
	for(int i=1;i<=4;i++){
		cout<<sum[i];
	}
	return 0;
}
