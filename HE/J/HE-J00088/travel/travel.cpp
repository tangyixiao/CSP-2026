#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,g; 
	cin>>a>>b>>c>>g;
	if(a==c){
			cout<<"1";
			if(b[0]==g[0]&&b[1]==g[1]){
			cout<<"1";
			if(b[2]<='C'&&g[2]<='C'){
				cout<<"1";
				if(b[2]-1==g[2]||b[2]+1==g[2]){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				if(b[2]>='C'&&g[2]>='C'){
					cout<<"1";
					if(b[2]-1==g[2]||b[2]+1==g[2]){
					cout<<"1";
				}else{
					cout<<"0";
				}
				}else{
					cout<<"00";
				}
			}
		}else{
			cout<<"000";
		}
		}else{
		cout<<"0000";
		}
	return 0;
}
