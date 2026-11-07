#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
bool f1=0,x1=0,x2=0,f2=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	if(c1[0]==c3[0]&&c1[1]==c3[1])cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(c2[1]==c4[1]){
		cout<<1;
		f1=1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if(c2[2]=='A'||(c2[2]=='B'||c2[2]=='C'))x1=1;
	if(c4[2]=='A'||(c4[2]=='B'||c4[2]=='C'))x2=1;
	if(f1==1&&x1==x2){
		f2=1;
		cout<<1;
	}
	else {
		cout<<"00";
		return 0;
	}
	if((f1==1&&f2==1)&&((c2[2]=='A'&&c4[2]=='B')||(c2[2]=='B'&&c4[2]=='C')||(c4[2]=='A'&&c2[2]=='B')||(c4[2]=='B'&&c2[2]=='C')||(c2[2]=='D'&&c4[2]=='F')||(c4[2]=='D'&&c2[2]=='F')))cout<<1;
	else cout<<0;
	//T1
	return 0;
}
