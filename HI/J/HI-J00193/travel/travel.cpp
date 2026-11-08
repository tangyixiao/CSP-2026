#include<bits/stdc++.h>
using namespace std; 
int main(){
	freopen("travel.in","r",stdin);	
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		string bt=b.substr(0,2),dt=d.substr(0,2);
		if(bt==dt){
			cout<<1;
			string bbt=b.substr(2),ddt=d.substr(2);
			if((bbt<="C"&&ddt<="C")||(bbt>="D"&&ddt>="D")){
				cout<<1;
				if((bbt=="C"&&ddt=="D")||(bbt=="D"&&ddt=="C")) {
					cout<<"0";
					return 0;
				}
				if(abs(bbt[0]-ddt[0])==1) cout<<1;
				else cout<<"0";
			} 
			else cout<<"00";
		}
		else cout<<"000";
	} 
	else cout<<"0000";
	return 0;
}

