#include<bits/stdc++.h>
using namespace std;
bool flag,p,q;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	char e,f;
	cin>>a>>b>>c>>d;
	if(a!=c){
		cout<<"0000";
		return 0;
	}
	else {
		cout<<"1";
		for(int i=1;i<=2;i++){
			if(b[i]==d[i]){
				flag==true;
			}
		}
		if(flag){
			//cout<<"1";
			for(int i=2;i<=3;i++){
				if((b[i]<='C'&&d[i]<='C')||(b[i]>'C'&&d[i]>'C')){
					p=true;
				}
			}
			if(p){
				//cout<<"1";
				for(int i=2;i<=3;i++){
					if(b[i]+1==d[i]||b[i]-1==d[i]){
						q=true;
					}
				}
			}
		}
		if(flag) cout<<"1";
		else {
			cout<<"000";
			return 0;
		}
		if(p) cout<<"1";
		else {
			cout<<"00";
			return 0;
		}
		if(q){
			cout<<"1";
		}
		else {
			cout<<"0";
		}
	return 0;
}}

