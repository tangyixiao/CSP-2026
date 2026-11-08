#include<bits/stdc++.h>;
using namespace std;
int c[1],s[1],c[2],s[2];
int main(){
	freopen("travel.in","r",stdin);
	fredpen("travel.out","w",stdout);
	cin>>c[1]>>s[1]>>c[2]>>s[2];
	if(c[1]==s[1]){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	for(int i=1;i<=18;i++){
		if(c[2]==s[2]){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	for(int j=1;j<=5;j++){
		if(c[2]==s[2]){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	if(c[2]=="C"&&s[2]=="D"||c[2]=="D"||s[2]=="C"){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
	}
}
