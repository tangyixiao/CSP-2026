#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll whe1,h1,tt1,aa;//chexiang,nayice(1zuo,2you),hangshu
char a[10],b[10],tra1[3],tra2[3];
ll whe2,h2,tt2,bb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool x=true;
	cin>>tra1[0]>>tra1[1];
	cin>>a[0]>>a[1]>>a[2];
	cin>>tra2[0]>>tra2[1];
	cin>>b[0]>>b[1]>>b[2];
	tt1=(tra1[0]-'0')*10+(tra1[1]-'0');
	tt2=(tra2[0]-'0')*10+(tra2[1]-'0');
	if(tt1==tt2&&x==true){
		cout<<1;
	}
	else{
		x=false;
		cout<<0;
	}
	aa=(a[0]-'0')*10+(a[1]-'0');
	bb=(b[0]-'0')*10+(b[1]-'0');
	if(aa==bb&&x==true){
		cout<<1;
	}
	else{
		x=false;
		cout<<0;
	}
	
	if(((a[2]<='C'&&b[2]<='C')||(a[2]>'C'&&b[2]>'C'))&&x==true){
		cout<<1;	
	}
	else{
		x=false;
		cout<<0;
	}
	if((abs(a[2]-b[2])==1||(a[2]=='D'&&b[2]=='F')||(a[2]=='F'&&b[2]=='D'))&&x==true){
		cout<<1;
	}else{
		cout<<0;
		x=false;
	}
	return 0; 
} 
