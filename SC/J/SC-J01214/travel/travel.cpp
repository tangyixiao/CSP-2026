#include <bits/stdc++.h>
using namespace std;
int myh[10];
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
		if(b[0]==d[0] and b[1]==d[1]){
			cout<<"1";
			if(b[2]<='C' and d[2]<='C'){
				cout<<"1";
				if(abs(b[2]-d[2])==1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else if(b[2]>='D' and d[2]>='D'){
				cout<<"11";
			}else{
				cout<<"00";
				return 0;
			}
		}else{
			cout<<"000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
}