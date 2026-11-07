#include<bits/stdc++.h>
using namespace std;
char a[5],b[5],c[5],d[5];
int main(){
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
    cin>>a[1]>>a[2];
    cin>>b[1]>>b[2]>>b[3];
    cin>>c[1]>>c[2];
    cin>>d[1]>>d[2]>>d[3];
    if(a[1]==c[1]&&a[2]==c[2]){
    	cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
    if(b[1]==d[1]&&b[2]==d[2]){
    	cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if((b[3]<='C'&&d[3]<='C')||(('D'<=b[3]<='F'&&'D'<=d[3]<='F')&&(b[3]!='C'&&d[3]!='C'))){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if((b[3]=='A'&&d[3]=='B')||(b[3]=='B'&&d[3]=='C')||(b[3]=='D'&&d[3]=='F')||(b[3]=='B'&&d[3]=='A')||(b[3]=='C'&&d[3]=='B')||(b[3]=='F'&&d[3]=='D')){
		cout<<"1";
	}else{
		cout<<"0";
	}

	return 0;
}