#include<bits/stdc++.h>
using namespace std;
int a,b,zw1,zw2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s1>>b>>s2;
	if(a!=b){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(s1[0]=='1'){
		zw1+=10;
	}
	zw1+=s1[1]-'0';
	if(s2[0]=='1'){
		zw2+=10;
	}
	zw2+=s2[1]-'0';
	if(zw1==zw2){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	int v1=s1[2]-'A'+1;
	int v2=s2[2]-'A'+1;
	if((v1<=3&&v2<=3)||(v1>=4&&v2>=4)){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if(((v1-1)==v2)||((v1+1)==v2)){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}