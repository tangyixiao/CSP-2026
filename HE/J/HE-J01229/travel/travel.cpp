#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3){
		if(c2[0]==c4[0] && c2[1]==c4[1]){
			if(c2[2]<='C' && c4[2]<='C'){
				if(abs(c4[2]-c2[2])==1){
					cout<<1<<1<<1<<1;
					return 0;
				}else{
					cout<<1<<1<<1<<0;
					return 0;
				}
			}else{
				cout<<1<<1<<0<<0;
				return 0;
			}
			if(c2[2]>='D' && c4[2]>='D'){
				cout<<1;
				if(abs(c4[2]-c2[2])==2){
					cout<<1<<1<<1<<1;
					return 0;
				}else{
					cout<<1<<1<<1<<0;
					return 0;
				}
			}else{
				cout<<0;
			}
		}else{
			cout<<1<<0<<0<<0;
			return 0;
		}
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	return 0;
}
