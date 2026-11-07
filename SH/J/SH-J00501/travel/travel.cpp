#include<cmath>
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,c,d;
	char e,f;
	cin>>a>>b>>e>>c>>d>>f;
	if(a==c){
		cout<<'1';
		if(b==d){
			cout<<'1';
			if((e<='C')^(f<='C')){
				cout<<"00\n";
			}else{
				cout<<'1';
				if(abs(f-e)==1||(f>'C'&&abs(f-e)==2)){
					cout<<"1\n";
				}else{
					cout<<"0\n";
				}
			}
		}else cout<<"000\n";
	}else cout<<"0000\n";
	return 0;
} 
