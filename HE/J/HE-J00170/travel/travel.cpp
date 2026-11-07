#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,a1,b1;
	cin>>a;
	cin>>b;
	cin>>a1;
	cin>>b1;
	if(a==a1){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(b[1]==b1[1]&&b[0]==b1[0]){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if((b[2]=='D'&&b1[2]=='F')||(b[2]=='F'&&b1[2]=='D')){
		cout<<"11";
		return 0;
	}
	else if((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(b1[2]=='A'||b1[2]=='B'||b1[2]=='C')){
		cout<<1;
		if((b[2]=='A'&&b1[2]=='C')||(b1[2]=='A'&&b[2]=='C')){
			cout<<0;
		}
		else{
			cout<<1;
		}
	}
	else{
		cout<<"00";
		return 0;
	}
	fclose(stdin);
	fclose(stdout);

	return 0;
}

