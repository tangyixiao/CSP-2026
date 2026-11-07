#include<bits/stdc++.h>
using namespace std;
string cc1,ss1,cc2,ss2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cc1>>ss1>>cc2>>ss2;
	if(cc1==cc2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	int sss1=0,sss2=0;
	for(int i=0;i<2;i++){
		int t=ss1[i]-'0';
		sss1=sss1*10+t;
	}
	for(int i=0;i<2;i++){
		int t=ss2[i]-'0';
		sss2=sss2*10+t;
	}
	if(sss1==sss2) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	char a=ss1[2],b=ss2[2];
	if(a>='A'&&a<='C'&&b>='A'&&b<='C'){
		cout<<1;
		
	}
	else if(a>='D'&&a<='F'&&b<='F'&&b>='D'){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(abs((int)a-(int)b)==1){
		cout<<1;
	}
	else cout<<0;
	return 0;
}
