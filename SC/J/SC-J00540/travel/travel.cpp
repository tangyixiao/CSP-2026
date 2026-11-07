#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		printf("1");
	}else{
		printf("0");
	}
	int r1=(b[0]-'0')*10+(b[1]-'0'),r2=(d[0]-'0')*10+(d[1]-'0');
	if(a==c&&r1==r2){
		printf("1");
	}else{
		printf("0");
	}
	if(a==c&&r1==r2&&(b[2]<='C'&&d[2]<='C'||b[2]>='D'&&d[2]>='D')){
		printf("1");
	}else{
		printf("0");
	}
	if(r1==r2&&(b[2]<='C'&&d[2]<='C'||b[2]>='D'&&d[2]>='D')&&a==c&&abs(d[2]-b[2])==1){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
}