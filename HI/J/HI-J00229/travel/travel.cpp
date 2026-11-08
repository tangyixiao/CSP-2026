#include<bits/stdc++.h>
using namespace std;

int main(){

	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a,b,c,d;
	int n=0;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
		if(b[0]==d[0] && b[1]==d[1]){
		cout<<"1";
		if(b[2]=='F' || d[2]=='F'){
			if(b[2]=='D' || d[2]=='D'){
				n=1;
				cout<<"1";
			}
			else cout<<"0";
		}else if(b[2]=='D' || d[2]=='D'){
			cout<<"0";
		}else{
			cout<<"1";
			n=1;
		}
	}else cout<<"00";
	if(n==1 && abs(b[2]-d[2])==1 && ((b[2]!='C' && b[2]!='D')||((b[2]=='C' && d[2]!='D')||(b[2]=='D' && d[2]!='C'))))cout<<"1";
	else cout<<"0";
	}else cout<<"0000";
	return 0;
}
