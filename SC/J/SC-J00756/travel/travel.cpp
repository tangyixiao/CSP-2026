#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,a1,a2;
char d1,d2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<2;i++){
		a1+=s1[i];
		a2+=s2[i];
	}
	d1=s1[2];
	d2=s2[2];
	if(a1==a2){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(d1<='C'&&d2<='C'||d1>='D'&&d2<='D'){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if(d1=='A'&&d2=='B'||d1=='A'&&d2=='C'||d1=='B'&&d2=='A'||d1=='D'&&d2=='F'||d1=='F'&&d2=='D'){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}