#include <bits/stdc++.h> 
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c) cout<<'1';
	else{
		cout<<"0000";
		return 0;
	} 
	int f = 0;
	for(int i = 0;i<=1;i++){
		if(b[i]!=d[i]){
			f = 1;
			break;
			}
		}
	if(f == 0) cout<<'1';
	else {
	cout<<"000";
	return 0;	
	}
	if((b[2]=='A'&&d[2]=='B')||(b[2]=='A'&&d[2]=='C')||(b[2]=='B'&&d[2]=='A')||(b[2]=='B'&&d[2]=='C')||(b[2]=='C'&&d[2]=='A')||(b[2]=='C'&&d[2]=='B')||(b[2]=='D'&&d[2]=='E')||(b[2]=='E'&&d[2]=='D')){
		cout<<'1';
	}
	else {
		cout<<"00";
		return 0;
	}
	if(((char(int(b[2])+1))==d[2]||char(int(b[2])-1)==d[2])){
		if((b[2]=='C'&&d[2]=='D')||(b[2]=='D'&&d[2]=='C')){
			cout<<'0';
		}
		else cout<<'1';
	}
	else cout<<'0';
	return 0;
}
