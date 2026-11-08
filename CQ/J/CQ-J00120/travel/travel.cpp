#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	bool a=0,b=0,c=0,t=0;
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		cout<<"1";
		a=1;
	}
	else cout<<"0";
	
	if(a==1&&a2[0]==b2[0]&&a2[1]==b2[1]){
		cout<<"1";
		b=1;
	}
	else cout<<"0";
	
	if(a==1&&b==1&&(a2[2]=='F'&&b2[2]=='D') || (a2[2]=='D'&&b2[2]=='F')) {
		t=1;	
	}
	if(a==1&&b==1&&(t==1||(a2[2]!='F'&&a2[2]!='D'&&b2[2]!='F'&&b2[2]!='D'))){
		cout<<"1";
		c=1;
	}
	else{
		cout<<"0";
	}

	if((int(a2[2]-b2[2] )==1||int(a2[2]-b2[2] )==-1)&&a==1&&b==1&&c==1) {
		cout<<"1";
	}
	else {
		cout<<"0";	
	}
	return 0;
}
