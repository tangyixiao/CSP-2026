#include<bits\stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
	}
	else{
		cout<<"0000";
	}
	if(b-d>=1&&b-d<=4){
		cout<<"1";
	}
	else{
		cout<<"1000";
	}
	if(b-d==2||b-d==1){
		cout<<"1";
	}
	else{
		cout<<"1100";
	}
	if(b-d==1){
		cout<<"1111";
	}
	else{
		cout<<"1110";
	}
	return 0;
}
