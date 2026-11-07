#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string a1,b1;
	cin>>a>>a1>>b>>b1;
	if(a!=b){
		cout<<"0000";
		return 0;
	}
	if(a1[0]!=b1[0]||a1[1]!=b1[1]){
		cout<<"1000";
		return 0;
	}
	if(a1[2]<='C'&&b1[2]<='C'){
		if(abs(a1[2]-b1[2])==1){
			cout<<"1111";
		}else{
			cout<<"1110";
		}
	}else if(a1[2]>'C'&&b1[2]>'C')cout<<"1111";
	else{
		cout<<"1100";
	}
	return 0;
}