#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
bool flag[5];
signed main(void){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		flag[1]=true;
	}else{
		cout<<"0000";
		return 0;
	}
	if(a2[0]==b2[0]&&a2[1]==b2[1]){
		flag[2]=true;
	}else{
		cout<<"1000";
		return 0;
	}
	int a3,b3;
	a3=a2[2]-'A';b3=b2[2]-'A';
	if((a3<=2&&b3<=2)||(a3>2&&b3>2)){
		flag[3]=true;
	}else{
		cout<<"1100";
		return 0;
	}
	if(abs(a3-b3)==1){
		flag[4]=true;
	}else{
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
} 