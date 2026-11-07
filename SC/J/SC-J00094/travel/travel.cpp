#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	double c,d,e,f;
	cin>>a>>c>>e>>b>>d>>f;
	if(a==b){
		cout<<"0000";
		return 0;
	}
	if(a!=b){
		cout<<"1";
	}
	if(c==d){
		cout<<"000";
		return 0;
	}
	if(c!=d){
		if(e<='C'&&f<='C'){
			if(e+'1'==f){
				cout<<"111";
			}
			else if(e-'1'==f){
				cout<<"111";
			}
			else {
				cout<<"110";
			}	
		}
		else if(e>'C'&&f>'C'){
			if(e+'1'==f){
				cout<<"111";
			}
			else if(e-'1'==f){
				cout<<"111";
			}
			else {
				cout<<"110";
			}
		}
		else if(e<='C'&&f>'C'){
			cout<<"100";
		}
		else if(e>'C'&&f<='C'){
			cout<<"100";
		}
	}
	return 0;
}