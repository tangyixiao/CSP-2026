#include<bits/stdc++.h>
using namespace std;

string n,m,p,q;

int main(){
	ios::sync_with_stdio(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>p>>m>>q;
	if(n!=m){
		cout<<"0000";
		return 0;
	}else{
		cout<<"1";
	}
	if(p[0]!=q[0]||p[1]!=q[1]){
		cout<<"000";
		return 0;
	}else{
		cout<<"1";
	}
	if(p[2]>q[2])	swap(p,q);
	if((p[2]<='C')^(q[2]<='C')){
		cout<<"00";
		return 0;
	}else{
		cout<<"1";
	}
	if((p[2]=='A'&&q[2]=='B')||(p[2]=='B'&&q[2]=='C')||(p[2]=='D'&&q[2]=='F')){
		cout<<"1";
	}else{
		cout<<"0";
	}

	
	return 0;
}
