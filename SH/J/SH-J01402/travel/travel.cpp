#include<bits/stdc++.h>
using namespace std;
char c[27];
char d[27];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	cin>>a;
	for(int i=1;i<=3;i++){
		cin>>c[i];
	}
	cin>>b;
	for(int i=1;i<=3;i++){
		cin>>d[i];
	}
	int ok=0;
	if(a==b){
		cout<<1;
		ok=1;
	}else{
		cout<<0;
	}
	if(ok==1 && c[1]*10+c[2]==d[1]*10+d[2]){
		cout<<1;
		ok=2;
	}else{
		cout<<0;
	}
	if(ok==2 && (c[3]+d[3]==137 || c[3]+d[3]>=131 && c[3]+d[3]<=133)){
		cout<<1;
		ok=3;
	}else{
		cout<<0;
	}
	if(ok==3 && abs(c[3]-d[3])==1 ){
		cout<<1;	
	}else{
		cout<<0;
	}
	return 0;
} 
