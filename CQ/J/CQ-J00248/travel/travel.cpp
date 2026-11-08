#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int sum;
	if(c1==c2){
		cout<<"1";
		sum=1;
	}else{
		cout<<"0";sum=0;
	}if(s1[0]==s2[0]&&s1[1]==s2[1]&&sum==1){
		cout<<"1";sum=1;
	}else{
		cout<<"0";sum=0;
	}if((s1[2]<='C'&&s2[2]<='C'||s1[2]>'C'&&s2[2]>'C')&&sum==1){
		cout<<"1";sum=1;
	}else{
		cout<<"0";sum=0;
	}if(sum==1&&(s1[2]==s2[2]+1||s1[2]==s2[2]-1)){
		cout<<"1";
	}else{
		cout<<"0";
	}
} 
