#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string n,x;
	string m,y;
	cin>>n>>m>>x>>y;
	char a=m[2],b=y[2];
	bool as=false;
	if(n!=x){
		cout<<0<<0<<0<<0;
		return 0;
	}else{
		cout<<1;
		if(m[0]==y[0] && m[1]==y[1]){
			cout<<1;
			as=true;
		}else{
			cout<<0;
		}
	}
	if(as&&(a<='C' && b<='C') || (a>'C' &&b>'C')){
		cout<<1;
	}else{
		cout<<0;
	}
	int t=m[2]-0,y1=y[2]-0;
	if(as&&max(t,y1)-min(t,y1)==1 && !((m[2]=='C' && y[2]=='D') || (y[2]=='C' && m[2]=='D'))){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 