#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a;
	string b;
	int c;
	string d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	bool a1,b1,c1,d1;
	a1=b1=c1=d1=false;
	if(a==c){
		cout<<1; 
		a1=true;
	}else{
		cout<<0;
	}
	if(b[0]==d[0]&&b[1]==d[1]&&a1){
		cout<<1;
		b1=true;
	}else{
		cout<<0;
	}
	if(b1&&((b[2]<='C'&&d[2]<='C')||(b[2]>'C'&&d[2]>'C'))){
		cout<<1;
		c1=true;
	}else{
		cout<<0;
	}
	if(c1&&(b[2]+1==d[2]||d[2]+1==b[2])){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}//T1 finished