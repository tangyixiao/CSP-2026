#include<bits/stdc++.h>
using namespace std;
char C1[5],S1[5],C2[5],S2[5];
int a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>C1>>S1>>C2>>S2;
	if(C1[0]==C2[0]&&C1[1]==C2[1]){
		cout<<1;a=1;
	}
	else cout<<0;
	if(S1[0]==S2[0]&&S1[1]==S2[1]&&a==1){
		cout<<1;b=1;
	}
	else cout<<0;
	if((S1[2]>='A'&&S1[2]<='C'&&S2[2]>='A'&&S2[2]<='C')||(S1[2]>='D'&&S1[2]<='F'&&S2[2]>='D'&&S2[2]<='F')){
		if(a==1&&b==1){
			cout<<1;c=1;
		}
		else cout<<0;
		if(abs(S1[2]-S2[2])==1&&c==1)cout<<1;
		else cout<<0;
	}
	else{
		cout<<"00";
	}	
	return 0;
} 
