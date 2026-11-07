#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	b=' '+b;
	d=' '+d;
	if(a==c){
		cout<<1;
		if(b[1]==d[1]&&b[2]==d[2]){
			cout<<1;
			if((b[3]=='D'&&d[3]=='F')||(b[3]=='F'&&d[3]=='D')){
				cout<<"11";
				return 0;
			}if(b[3]=='D'||d[3]=='F'||b[3]=='F'||d[3]=='D'){
				cout<<"00";
				return 0;
			}cout<<1;
			if(b[3]=='A'&&d[3]=='B'||b[3]=='B'&&d[3]=='A'){
				cout<<1;
				return 0;
			}if(b[3]=='C'&&d[3]=='B'||b[3]=='B'&&d[3]=='C'){
				cout<<1;
				return 0;
			}cout<<0;
			return 0;
		}else{
			cout<<"000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
}