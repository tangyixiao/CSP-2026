#include<bits/stdc++.h>
using namespace std;
string sx,tx,sv,tv;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>sx>>tx>>sv>>tv;
	if(sx==sv){
		cout<<1;
	}else{
		cout<<0;
	}
	if(sx==sv&&tx[0]==tv[0]&&tx[1]==tv[1]){
		cout<<1;
	}else{
		cout<<0;
	}
	if(sx==sv&&tx[0]==tv[0]&&tx[1]==tv[1]&&('A'<=tx[2]&&tx[2]<='C'&&'A'<=tv[2]&&tv[2]<='C')||('D'<=tx[2]&&tx[2]<='E'&&'D'<=tv[2]&&tv[2]<='E')){
		cout<<1;
		if(abs(tx[2]-tv[2])==1){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<"00";
	}
}