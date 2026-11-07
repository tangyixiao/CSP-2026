#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int e,f,flag;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
		flag=1; 
	}
	else{
		cout<<"0";
		flag=0;
	}
	
	if(flag==1&&b[0]==d[0]&&b[1]==d[1]){
		cout<<"1";
	}
	else{
		cout<<"0";
		flag=0;
	}
	
	e=b[2]-'A'+1;
	f=d[2]-'A'+1;
	if(flag==1&&((e<=3&&f<=3)||(e>=4&&f>=4))){
		cout<<"1";
	}
	else{
		cout<<"0";
		flag=0;
	}
	if(flag==1&&abs(e-f)==1){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}
