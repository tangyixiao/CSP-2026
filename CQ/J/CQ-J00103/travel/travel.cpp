#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b;
	int c,d;
	cin>>c>>a>>d>>b;
	if(c!=d){
		cout<<"0000";
		return 0;
	}
	int e=a[0]-'0',f=b[0]-'0';
	e=10*e+a[1]-'0';
	f=10*f+b[1]-'0';
	if(e!=f){
		cout<<"1000";
		return 0;
	}
	if((a[2]<='C'&&b[2]<='C')||(a[2]>'C'&&b[2]>'C')){
		if(a[2]>'C'&&b[2]>'C'){
			cout<<"1111";
			return 0;
		}
		if(a[2]-b[2]==1||b[2]-a[2]==1){
			cout<<"1111";
			return 0;
		}
		cout<<"1110";
		return 0;
	}
	else{
		cout<<"1100";
		return 0;
	}
	return 0;
}

